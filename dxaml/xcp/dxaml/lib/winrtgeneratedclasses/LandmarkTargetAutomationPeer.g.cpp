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

#include "LandmarkTargetAutomationPeer.g.h"

// Constructors/destructors.
DirectUI::LandmarkTargetAutomationPeerGenerated::LandmarkTargetAutomationPeerGenerated()
{
}

DirectUI::LandmarkTargetAutomationPeerGenerated::~LandmarkTargetAutomationPeerGenerated()
{
}

HRESULT DirectUI::LandmarkTargetAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::LandmarkTargetAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::LandmarkTargetAutomationPeer*>(this);
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


namespace DirectUI
{
}
