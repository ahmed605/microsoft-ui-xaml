// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#include "precomp.h"
#include "RightTappedRoutedEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::RightTappedRoutedEventArgs::RightTappedRoutedEventArgs()
{
}

DirectUI::RightTappedRoutedEventArgs::~RightTappedRoutedEventArgs()
{
}

HRESULT DirectUI::RightTappedRoutedEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::RightTappedRoutedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::RightTappedRoutedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IRightTappedRoutedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IRightTappedRoutedEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::RoutedEventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

CEventArgs* DirectUI::RightTappedRoutedEventArgs::CreateCorePeer()
{
    return new CRightTappedEventArgs(DXamlCore::GetCurrent()->GetHandle());
}

// Properties.
IFACEMETHODIMP DirectUI::RightTappedRoutedEventArgs::get_PointerDeviceType(_Out_ ABI::Microsoft::UI::Input::PointerDeviceType* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    DirectUI::PointerDeviceType valueCore;

    ARG_VALIDRETURNPOINTER(pValue);

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CRightTappedEventArgs*>(pCoreEventArgsNoRef)->get_PointerDeviceType(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RightTappedRoutedEventArgs::get_Handled(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    BOOLEAN valueCore;

    ARG_VALIDRETURNPOINTER(pValue);

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CRightTappedEventArgs*>(pCoreEventArgsNoRef)->get_Handled(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RightTappedRoutedEventArgs::put_Handled(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    BOOLEAN valueCore = value;

    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CRightTappedEventArgs*>(pCoreEventArgsNoRef)->put_Handled(valueCore));


Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::RightTappedRoutedEventArgs::GetPosition(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pRelativeTo, _Out_ ABI::Windows::Foundation::Point* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::RightTappedRoutedEventArgs_GetPosition);
    }
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    CUIElement* pRelativeToCore = static_cast<CUIElement*>(pRelativeTo ? static_cast<DirectUI::UIElement*>(pRelativeTo)->GetHandle() : nullptr);
    ABI::Windows::Foundation::Point returnValueCore;

    ARG_VALIDRETURNPOINTER(pReturnValue);

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CRightTappedEventArgs*>(pCoreEventArgsNoRef)->GetPosition(pRelativeToCore, &returnValueCore));

    IFC(CValueBoxer::ConvertToFramework(returnValueCore, pReturnValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateRightTappedRoutedEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::RightTappedRoutedEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_RightTappedRoutedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::ActivationFactory<DirectUI::RightTappedRoutedEventArgs>>::CreateActivationFactory());
    }
}