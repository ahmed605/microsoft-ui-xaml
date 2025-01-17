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

#include "TextRangeCollection.g.h"

// Constructors/destructors.
DirectUI::TextRangeCollectionGenerated::TextRangeCollectionGenerated()
{
}

DirectUI::TextRangeCollectionGenerated::~TextRangeCollectionGenerated()
{
}

HRESULT DirectUI::TextRangeCollectionGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::TextRangeCollection)))
    {
        *ppObject = static_cast<DirectUI::TextRangeCollection*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Documents::TextRange>)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Documents::TextRange>*>(this);
    }
    else
    {
        RRETURN(DirectUI::PresentationFrameworkCollection<ABI::Microsoft::UI::Xaml::Documents::TextRange>::QueryInterfaceImpl(iid, ppObject));
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
