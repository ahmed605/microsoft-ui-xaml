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

#include "SystemBackdrop.g.h"
#include "XamlRoot.g.h"

// Constructors/destructors.
DirectUI::SystemBackdropGenerated::SystemBackdropGenerated()
{
}

DirectUI::SystemBackdropGenerated::~SystemBackdropGenerated()
{
}

HRESULT DirectUI::SystemBackdropGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::SystemBackdrop)))
    {
        *ppObject = static_cast<DirectUI::SystemBackdrop*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::ISystemBackdropOverrides)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::Media::ISystemBackdropOverrides>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::SystemBackdropGenerated::GetDefaultSystemBackdropConfiguration(_In_ ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop* pTarget, _In_ ABI::Microsoft::UI::Xaml::IXamlRoot* pXamlRoot, _Outptr_ ABI::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropConfiguration** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::SystemBackdrop_GetDefaultSystemBackdropConfiguration);
    }
    ARG_NOTNULL(pTarget, "target");
    ARG_NOTNULL(pXamlRoot, "xamlRoot");
    ARG_VALIDRETURNPOINTER(ppResult);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<SystemBackdrop*>(this)->GetDefaultSystemBackdropConfigurationImpl(pTarget, pXamlRoot, ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::SystemBackdropGenerated::OnDefaultSystemBackdropConfigurationChanged(_In_ ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop* pTarget, _In_ ABI::Microsoft::UI::Xaml::IXamlRoot* pXamlRoot)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::SystemBackdrop_OnDefaultSystemBackdropConfigurationChanged);
    }
    ARG_NOTNULL(pTarget, "target");
    ARG_NOTNULL(pXamlRoot, "xamlRoot");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<SystemBackdrop*>(this)->OnDefaultSystemBackdropConfigurationChangedImpl(pTarget, pXamlRoot));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::SystemBackdropGenerated::OnDefaultSystemBackdropConfigurationChangedProtected(_In_ ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop* pTarget, _In_ ABI::Microsoft::UI::Xaml::IXamlRoot* pXamlRoot)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Media::ISystemBackdropOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnDefaultSystemBackdropConfigurationChanged(pTarget, pXamlRoot));
    }
    else
    {
        IFC(OnDefaultSystemBackdropConfigurationChanged(pTarget, pXamlRoot));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::SystemBackdropGenerated::OnTargetConnected(_In_ ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop* pConnectedTarget, _In_ ABI::Microsoft::UI::Xaml::IXamlRoot* pXamlRoot)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::SystemBackdrop_OnTargetConnected);
    }
    ARG_NOTNULL(pConnectedTarget, "connectedTarget");
    ARG_NOTNULL(pXamlRoot, "xamlRoot");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<SystemBackdrop*>(this)->OnTargetConnectedImpl(pConnectedTarget, pXamlRoot));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::SystemBackdropGenerated::OnTargetConnectedProtected(_In_ ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop* pConnectedTarget, _In_ ABI::Microsoft::UI::Xaml::IXamlRoot* pXamlRoot)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Media::ISystemBackdropOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnTargetConnected(pConnectedTarget, pXamlRoot));
    }
    else
    {
        IFC(OnTargetConnected(pConnectedTarget, pXamlRoot));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::SystemBackdropGenerated::OnTargetDisconnected(_In_ ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop* pDisconnectedTarget)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::SystemBackdrop_OnTargetDisconnected);
    }
    ARG_NOTNULL(pDisconnectedTarget, "disconnectedTarget");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<SystemBackdrop*>(this)->OnTargetDisconnectedImpl(pDisconnectedTarget));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::SystemBackdropGenerated::OnTargetDisconnectedProtected(_In_ ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop* pDisconnectedTarget)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Media::ISystemBackdropOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnTargetDisconnected(pDisconnectedTarget));
    }
    else
    {
        IFC(OnTargetDisconnected(pDisconnectedTarget));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}

HRESULT DirectUI::SystemBackdropFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::ISystemBackdropFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::ISystemBackdropFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableAbstractCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::SystemBackdropFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop);
    const GUID metadataAPIGUID = MetadataAPI::GetClassInfoByIndex(GetTypeIndex())->GetGuid();
    const KnownTypeIndex typeIndex = GetTypeIndex();

    if(uuidofGUID != metadataAPIGUID)
    {
        XAML_FAIL_FAST();
    }
#endif

    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableAbstractCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_SystemBackdrop()
    {
        RRETURN(ctl::ActivationFactoryCreator<SystemBackdropFactory>::CreateActivationFactory());
    }
}