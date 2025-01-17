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

#include "ThemeResource.g.h"

// Constructors/destructors.
DirectUI::ThemeResource::ThemeResource()
{
}

DirectUI::ThemeResource::~ThemeResource()
{
}

HRESULT DirectUI::ThemeResource::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ThemeResource)))
    {
        *ppObject = static_cast<DirectUI::ThemeResource*>(this);
    }
    else
    {
        RRETURN(DirectUI::MarkupExtensionBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT DirectUI::ThemeResource::get_ResourceKey(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ThemeResource_ResourceKey, pValue));
}
_Check_return_ HRESULT DirectUI::ThemeResource::put_ResourceKey(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ThemeResource_ResourceKey, value));
}

// Events.

// Methods.


