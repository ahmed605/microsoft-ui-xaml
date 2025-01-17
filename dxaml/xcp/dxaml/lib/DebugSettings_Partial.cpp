// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "precomp.h"
#include "DebugSettings.g.h"

#include <FrameworkUdk/Containment.h>

// Bug 45792810: Explorer first frame - DesktopWindowXamlSource spends 30ms on RoGetActivationFactory
// Bug 46468883: [1.4 servicing] Explorer first frame - DesktopWindowXamlSource spends 30ms on RoGetActivationFactory
#define WINAPPSDK_CHANGEID_46468883 46468883

using namespace DirectUI;


DebugSettings::DebugSettings()
    : m_fIsBindingTracingEnabled(1)
{
}

_Check_return_ HRESULT DebugSettings::get_EnableFrameRateCounterImpl(_Out_ BOOLEAN* pValue)
{
    bool value = false;
    IFCPTR_RETURN(pValue);

    IFC_RETURN(DXamlServices::IsDXamlCoreInitialized() ? S_OK : RPC_E_WRONG_THREAD);
    DXamlCore* pCore = DXamlCore::GetCurrent();
    IFCEXPECT_RETURN(pCore);

    IFC_RETURN(CoreImports::Host_GetEnableFrameRateCounter(pCore->GetHandle(), &value));
    *pValue = !!value;

    return S_OK;
}

_Check_return_ HRESULT DebugSettings::put_EnableFrameRateCounterImpl(_In_ BOOLEAN value)
{
    IFC_RETURN(DXamlServices::IsDXamlCoreInitialized() ? S_OK : RPC_E_WRONG_THREAD);
    DXamlCore* pCore = DXamlCore::GetCurrent();
    IFCEXPECT_RETURN(pCore);

    IFC_RETURN(CoreImports::Host_SetEnableFrameRateCounter(pCore->GetHandle(), !!value));

    return S_OK;
}

_Check_return_ HRESULT DebugSettings::get_IsTextPerformanceVisualizationEnabledImpl(_Out_ BOOLEAN* pValue)
{
    IFC_RETURN(DXamlServices::IsDXamlCoreInitialized() ? S_OK : RPC_E_WRONG_THREAD);
    DXamlCore* pCore = DXamlCore::GetCurrent();
    IFCEXPECT_RETURN(pCore);

    *pValue = pCore->GetHandle()->GetIsTextPerformanceVisualizationEnabled();

    return S_OK;
}

_Check_return_ HRESULT DebugSettings::put_IsTextPerformanceVisualizationEnabledImpl(_In_ BOOLEAN value)
{
    IFC_RETURN(DXamlServices::IsDXamlCoreInitialized() ? S_OK : RPC_E_WRONG_THREAD);
    DXamlCore* pCore = DXamlCore::GetCurrent();
    IFCEXPECT_RETURN(pCore);

    IFC_RETURN(pCore->GetHandle()->SetIsTextPerformanceVisualizationEnabled(!!value));

    return S_OK;
}

_Check_return_ HRESULT DebugSettings::get_FailFastOnErrorsImpl(_Out_ BOOLEAN* pValue)
{
    *pValue = GetProcessFailFastOnErrors();
    return S_OK;
}

_Check_return_ HRESULT DebugSettings::put_FailFastOnErrorsImpl(_In_ BOOLEAN value)
{
    SetProcessFailFastOnErrors(!!value);
    return S_OK;
}

_Check_return_ HRESULT DebugSettings::get_IsBindingTracingEnabledImpl(_Out_ BOOLEAN* pValue)
{
    IFCPTR_RETURN(pValue);
    IFC_RETURN(DXamlServices::IsDXamlCoreInitialized() ? S_OK : RPC_E_WRONG_THREAD);
    *pValue = m_fIsBindingTracingEnabled;

    return S_OK;
}

_Check_return_ HRESULT DebugSettings::put_IsBindingTracingEnabledImpl(_In_ BOOLEAN value)
{
    IFC_RETURN(DXamlServices::IsDXamlCoreInitialized() ? S_OK : RPC_E_WRONG_THREAD);
    m_fIsBindingTracingEnabled = value;

    return S_OK;
}

_Check_return_ HRESULT DebugSettings::get_IsXamlResourceReferenceTracingEnabledImpl(_Out_ BOOLEAN* pValue)
{
    IFCPTR_RETURN(pValue);
    IFC_RETURN(DXamlServices::IsDXamlCoreInitialized() ? S_OK : RPC_E_WRONG_THREAD);
    *pValue = m_fIsXamlResourceReferenceTracingEnabled;

    return S_OK;
}

_Check_return_ HRESULT DebugSettings::put_IsXamlResourceReferenceTracingEnabledImpl(_In_ BOOLEAN value)
{
    IFC_RETURN(DXamlServices::IsDXamlCoreInitialized() ? S_OK : RPC_E_WRONG_THREAD);
    m_fIsXamlResourceReferenceTracingEnabled = value;

    return S_OK;
}

void DebugSettings::OnThreadInitialized()
{
    wrl::ComPtr<msy::IDispatcherQueueStatics> queueStatics;
    bool succeeded = false;
    if (WinAppSdk::Containment::IsChangeEnabled<WINAPPSDK_CHANGEID_46468883>())
    {
        succeeded = SUCCEEDED(ActivationFactoryCache::GetActivationFactoryCache()->GetDispatcherQueueStatics(&queueStatics));
    }
    else
    {
        succeeded = SUCCEEDED(wf::GetActivationFactory(
                wrl::Wrappers::HStringReference(RuntimeClass_Microsoft_UI_Dispatching_DispatcherQueue).Get(),
                &queueStatics));
    }

    wrl::ComPtr<msy::IDispatcherQueue> queue;
    if (succeeded)
    {
        succeeded = SUCCEEDED(queueStatics->GetForCurrentThread(&queue));

        if (succeeded && queue)
        {
            auto unlock = m_maplock.lock_exclusive();
            wrl::WeakRef weakQueue;
            VERIFYHR(queue.AsWeak(&weakQueue));
            m_dispatcherQueues.emplace(GetCurrentThreadId(), std::move(weakQueue));
        }
    }
    ASSERT(succeeded);
}

void DebugSettings::OnThreadDeinitialized()
{
    auto unlock = m_maplock.lock_exclusive();
    m_dispatcherQueues.erase(GetCurrentThreadId());
}

std::vector<Microsoft::WRL::ComPtr<msy::IDispatcherQueue>> DebugSettings::GetDispatcherQueues()
{
    auto unlock = m_maplock.lock_shared();
    std::vector<wrl::ComPtr<msy::IDispatcherQueue>> returnValue;
    returnValue.reserve(m_dispatcherQueues.size());
    for (auto& weakQueue : m_dispatcherQueues)
    {
        wrl::ComPtr<msy::IDispatcherQueue> resolvedQueue;
        if (SUCCEEDED(weakQueue.second.As(&resolvedQueue)) && resolvedQueue)
        {
            returnValue.push_back(resolvedQueue);
        }
    }
    returnValue.shrink_to_fit();
    return returnValue;
}

Microsoft::WRL::ComPtr<msy::IDispatcherQueue> DebugSettings::GetDispatcherQueueForThreadId(DWORD threadId)
{
    auto unlock = m_maplock.lock_shared();
    auto& weakQueue =  m_dispatcherQueues[threadId];
    wrl::ComPtr<msy::IDispatcherQueue> resolvedQueue;
    if (SUCCEEDED(weakQueue.As(&resolvedQueue)) && resolvedQueue)
    {
        return resolvedQueue;
    }

    return nullptr;
}

