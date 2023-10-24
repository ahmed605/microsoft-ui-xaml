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

#include "ComboBoxLightDismissAutomationPeer.g.h"

// Constructors/destructors.
DirectUI::ComboBoxLightDismissAutomationPeerGenerated::ComboBoxLightDismissAutomationPeerGenerated()
{
}

DirectUI::ComboBoxLightDismissAutomationPeerGenerated::~ComboBoxLightDismissAutomationPeerGenerated()
{
}

HRESULT DirectUI::ComboBoxLightDismissAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ComboBoxLightDismissAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::ComboBoxLightDismissAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider*>(this);
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
IFACEMETHODIMP DirectUI::ComboBoxLightDismissAutomationPeerGenerated::Invoke()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::ComboBoxLightDismissAutomationPeer_Invoke);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ComboBoxLightDismissAutomationPeer*>(this)->InvokeImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
}