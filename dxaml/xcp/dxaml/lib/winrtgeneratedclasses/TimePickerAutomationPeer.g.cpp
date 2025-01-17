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

#include "TimePickerAutomationPeer.g.h"

// Constructors/destructors.
DirectUI::TimePickerAutomationPeerGenerated::TimePickerAutomationPeerGenerated()
{
}

DirectUI::TimePickerAutomationPeerGenerated::~TimePickerAutomationPeerGenerated()
{
}

HRESULT DirectUI::TimePickerAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::TimePickerAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::TimePickerAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer*>(this);
    }
    else
    {
        RRETURN(DirectUI::FrameworkElementAutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.

HRESULT DirectUI::TimePickerAutomationPeerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::TimePickerAutomationPeerFactory::CreateInstanceWithOwner(_In_ ABI::Microsoft::UI::Xaml::Controls::ITimePicker* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer** ppInstance)
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

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_TimePickerAutomationPeer()
    {
        RRETURN(ctl::ActivationFactoryCreator<TimePickerAutomationPeerFactory>::CreateActivationFactory());
    }
}
