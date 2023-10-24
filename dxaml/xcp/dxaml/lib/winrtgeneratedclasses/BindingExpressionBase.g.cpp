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

#include "BindingExpressionBase.g.h"

// Constructors/destructors.
DirectUI::BindingExpressionBaseGenerated::BindingExpressionBaseGenerated()
{
}

DirectUI::BindingExpressionBaseGenerated::~BindingExpressionBaseGenerated()
{
}

HRESULT DirectUI::BindingExpressionBaseGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::BindingExpressionBase)))
    {
        *ppObject = static_cast<DirectUI::BindingExpressionBase*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Data::IBindingExpressionBase)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Data::IBindingExpressionBase*>(this);
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

HRESULT DirectUI::BindingExpressionBaseFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Data::IBindingExpressionBaseFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Data::IBindingExpressionBaseFactory*>(this);
    }
    else
    {
        RRETURN(ctl::AggregableAbstractActivationFactory<DirectUI::BindingExpressionBase>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_BindingExpressionBase()
    {
        RRETURN(ctl::ActivationFactoryCreator<BindingExpressionBaseFactory>::CreateActivationFactory());
    }
}