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

#include "ResourceDictionaryCollection.g.h"

// Constructors/destructors.
DirectUI::ResourceDictionaryCollection::ResourceDictionaryCollection()
{
}

DirectUI::ResourceDictionaryCollection::~ResourceDictionaryCollection()
{
}

HRESULT DirectUI::ResourceDictionaryCollection::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ResourceDictionaryCollection)))
    {
        *ppObject = static_cast<DirectUI::ResourceDictionaryCollection*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::ResourceDictionary*>)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::ResourceDictionary*>*>(this);
    }
    else
    {
        RRETURN(DirectUI::PresentationFrameworkCollection<ABI::Microsoft::UI::Xaml::ResourceDictionary*>::QueryInterfaceImpl(iid, ppObject));
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