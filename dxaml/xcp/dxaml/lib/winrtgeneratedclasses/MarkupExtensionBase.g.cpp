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

#include "MarkupExtensionBase.g.h"

// Constructors/destructors.
DirectUI::MarkupExtensionBaseGenerated::MarkupExtensionBaseGenerated()
{
}

DirectUI::MarkupExtensionBaseGenerated::~MarkupExtensionBaseGenerated()
{
}

HRESULT DirectUI::MarkupExtensionBaseGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::MarkupExtensionBase)))
    {
        *ppObject = static_cast<DirectUI::MarkupExtensionBase*>(this);
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


