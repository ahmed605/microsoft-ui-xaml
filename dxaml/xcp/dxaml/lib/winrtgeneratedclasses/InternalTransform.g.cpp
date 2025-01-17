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

#include "InternalTransform.g.h"

// Constructors/destructors.
DirectUI::InternalTransformGenerated::InternalTransformGenerated()
{
}

DirectUI::InternalTransformGenerated::~InternalTransformGenerated()
{
}

HRESULT DirectUI::InternalTransformGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::InternalTransform)))
    {
        *ppObject = static_cast<DirectUI::InternalTransform*>(this);
    }
    else
    {
        RRETURN(DirectUI::GeneralTransform::QueryInterfaceImpl(iid, ppObject));
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
