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

#include "ListViewBaseItemDataAutomationPeer.g.h"

// Constructors/destructors.
DirectUI::ListViewBaseItemDataAutomationPeerGenerated::ListViewBaseItemDataAutomationPeerGenerated()
{
}

DirectUI::ListViewBaseItemDataAutomationPeerGenerated::~ListViewBaseItemDataAutomationPeerGenerated()
{
}

HRESULT DirectUI::ListViewBaseItemDataAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ListViewBaseItemDataAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::ListViewBaseItemDataAutomationPeer*>(this);
    }
    else
    {
        RRETURN(DirectUI::SelectorItemAutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


