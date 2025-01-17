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

#include "FrameworkElementAutomationPeer.g.h"
#include "UIElement.g.h"

// Constructors/destructors.
DirectUI::FrameworkElementAutomationPeerGenerated::FrameworkElementAutomationPeerGenerated()
{
}

DirectUI::FrameworkElementAutomationPeerGenerated::~FrameworkElementAutomationPeerGenerated()
{
}

HRESULT DirectUI::FrameworkElementAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::FrameworkElementAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::FrameworkElementAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeerPrivate)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeerPrivate*>(this);
    }
    else
    {
        RRETURN(DirectUI::AutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::FrameworkElementAutomationPeerGenerated::get_Owner(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FrameworkElementAutomationPeer_Owner, ppValue));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::FrameworkElementAutomationPeerGenerated::GetAutomationPeersForChildrenOfElement(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _Outptr_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Automation::Peers::AutomationPeer*>** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkElementAutomationPeer_GetAutomationPeersForChildrenOfElement);
    }
    ARG_NOTNULL(pElement, "element");
    ARG_VALIDRETURNPOINTER(ppResult);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<FrameworkElementAutomationPeer*>(this)->GetAutomationPeersForChildrenOfElementImpl(pElement, ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::FrameworkElementAutomationPeerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::FrameworkElementAutomationPeerFactory::CreateInstanceWithOwner(_In_ ABI::Microsoft::UI::Xaml::IFrameworkElement* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer** ppInstance)
{
    HRESULT hr = S_OK;
    ARG_NOTNULL(pOwner, "owner");
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceWithOwnerImpl(pOwner, pOuter, ppInner, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.


// Attached properties.

// Static properties.

// Static methods.
IFACEMETHODIMP DirectUI::FrameworkElementAutomationPeerFactory::FromElement(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IAutomationPeer** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::FrameworkElementAutomationPeer_FromElement);
    }
    ARG_NOTNULL(pElement, "element");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckActivationAllowed());
    IFC(FromElementImpl(pElement, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkElementAutomationPeerFactory::CreatePeerForElement(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IAutomationPeer** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::FrameworkElementAutomationPeer_CreatePeerForElement);
    }
    ARG_NOTNULL(pElement, "element");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckActivationAllowed());
    IFC(CreatePeerForElementImpl(pElement, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_FrameworkElementAutomationPeer()
    {
        RRETURN(ctl::ActivationFactoryCreator<FrameworkElementAutomationPeerFactory>::CreateActivationFactory());
    }
}
