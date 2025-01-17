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

#include "ManipulationDelta.g.h"

// Constructors/destructors.
DirectUI::ManipulationDelta::ManipulationDelta()
{
}

DirectUI::ManipulationDelta::~ManipulationDelta()
{
}

HRESULT DirectUI::ManipulationDelta::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ManipulationDelta)))
    {
        *ppObject = static_cast<DirectUI::ManipulationDelta*>(this);
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


namespace DirectUI
{
}
