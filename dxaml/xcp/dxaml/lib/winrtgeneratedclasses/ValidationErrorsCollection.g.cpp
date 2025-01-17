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

#include "ValidationErrorsCollection.g.h"

// Constructors/destructors.
DirectUI::ValidationErrorsCollectionGenerated::ValidationErrorsCollectionGenerated()
{
}

DirectUI::ValidationErrorsCollectionGenerated::~ValidationErrorsCollectionGenerated()
{
}

HRESULT DirectUI::ValidationErrorsCollectionGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ValidationErrorsCollection)))
    {
        *ppObject = static_cast<DirectUI::ValidationErrorsCollection*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Controls::InputValidationError*>)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Controls::InputValidationError*>*>(this);
    }
    else
    {
        RRETURN(DirectUI::ObservablePresentationFrameworkCollection<ABI::Microsoft::UI::Xaml::Controls::InputValidationError*>::QueryInterfaceImpl(iid, ppObject));
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
