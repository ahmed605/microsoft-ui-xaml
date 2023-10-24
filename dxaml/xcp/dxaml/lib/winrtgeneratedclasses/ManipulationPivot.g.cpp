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

#include "ManipulationPivot.g.h"

// Constructors/destructors.
DirectUI::ManipulationPivotGenerated::ManipulationPivotGenerated()
{
}

DirectUI::ManipulationPivotGenerated::~ManipulationPivotGenerated()
{
}

HRESULT DirectUI::ManipulationPivotGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ManipulationPivot)))
    {
        *ppObject = static_cast<DirectUI::ManipulationPivot*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IManipulationPivot)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IManipulationPivot*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ManipulationPivotGenerated::get_Center(_Out_ ABI::Windows::Foundation::Point* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ManipulationPivot_Center, pValue));
}
IFACEMETHODIMP DirectUI::ManipulationPivotGenerated::put_Center(_In_ ABI::Windows::Foundation::Point value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ManipulationPivot_Center, value));
}
IFACEMETHODIMP DirectUI::ManipulationPivotGenerated::get_Radius(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ManipulationPivot_Radius, pValue));
}
IFACEMETHODIMP DirectUI::ManipulationPivotGenerated::put_Radius(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ManipulationPivot_Radius, value));
}

// Events.

// Methods.

HRESULT DirectUI::ManipulationPivotFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IManipulationPivotFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IManipulationPivotFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::ManipulationPivotFactory::CreateInstanceWithCenterAndRadius(_In_ ABI::Windows::Foundation::Point center, _In_ DOUBLE radius, _Outptr_ ABI::Microsoft::UI::Xaml::Input::IManipulationPivot** ppInstance)
{
    HRESULT hr = S_OK;
    
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceWithCenterAndRadiusImpl(center, radius, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.



// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ManipulationPivot()
    {
        RRETURN(ctl::ActivationFactoryCreator<ManipulationPivotFactory>::CreateActivationFactory());
    }
}