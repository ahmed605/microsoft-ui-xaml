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

#include "CalendarScrollViewerAutomationPeer.g.h"

// Constructors/destructors.
DirectUI::CalendarScrollViewerAutomationPeerGenerated::CalendarScrollViewerAutomationPeerGenerated()
{
}

DirectUI::CalendarScrollViewerAutomationPeerGenerated::~CalendarScrollViewerAutomationPeerGenerated()
{
}

HRESULT DirectUI::CalendarScrollViewerAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::CalendarScrollViewerAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::CalendarScrollViewerAutomationPeer*>(this);
    }
    else
    {
        RRETURN(DirectUI::ScrollViewerAutomationPeer::QueryInterfaceImpl(iid, ppObject));
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
