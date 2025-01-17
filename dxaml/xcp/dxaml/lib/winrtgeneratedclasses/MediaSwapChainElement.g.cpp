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

#include "MediaSwapChainElement.g.h"

// Constructors/destructors.
DirectUI::MediaSwapChainElement::MediaSwapChainElement()
{
}

DirectUI::MediaSwapChainElement::~MediaSwapChainElement()
{
}

HRESULT DirectUI::MediaSwapChainElement::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::MediaSwapChainElement)))
    {
        *ppObject = static_cast<DirectUI::MediaSwapChainElement*>(this);
    }
    else
    {
        RRETURN(DirectUI::UIElement::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


