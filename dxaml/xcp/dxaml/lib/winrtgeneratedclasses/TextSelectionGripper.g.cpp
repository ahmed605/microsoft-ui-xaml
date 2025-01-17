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

#include "TextSelectionGripper.g.h"

// Constructors/destructors.
DirectUI::TextSelectionGripper::TextSelectionGripper()
{
}

DirectUI::TextSelectionGripper::~TextSelectionGripper()
{
}

HRESULT DirectUI::TextSelectionGripper::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::TextSelectionGripper)))
    {
        *ppObject = static_cast<DirectUI::TextSelectionGripper*>(this);
    }
    else
    {
        RRETURN(DirectUI::Canvas::QueryInterfaceImpl(iid, ppObject));
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
