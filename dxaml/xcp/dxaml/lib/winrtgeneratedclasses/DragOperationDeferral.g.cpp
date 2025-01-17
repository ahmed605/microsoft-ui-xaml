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

#include "DragOperationDeferral.g.h"

// Constructors/destructors.
DirectUI::DragOperationDeferralGenerated::DragOperationDeferralGenerated()
{
}

DirectUI::DragOperationDeferralGenerated::~DragOperationDeferralGenerated()
{
}

HRESULT DirectUI::DragOperationDeferralGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::DragOperationDeferral)))
    {
        *ppObject = static_cast<DirectUI::DragOperationDeferral*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IDragOperationDeferral)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IDragOperationDeferral*>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.
IFACEMETHODIMP DirectUI::DragOperationDeferralGenerated::Complete()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::DragOperationDeferral_Complete);
    }
    
    IFC(CheckThread());
    IFC(static_cast<DragOperationDeferral*>(this)->CompleteImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_DragOperationDeferral()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}
