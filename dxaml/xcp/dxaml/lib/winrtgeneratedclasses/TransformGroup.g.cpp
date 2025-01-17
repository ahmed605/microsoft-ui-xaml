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

#include "TransformGroup.g.h"
#include "TransformCollection.g.h"

// Constructors/destructors.
DirectUI::TransformGroup::TransformGroup()
{
}

DirectUI::TransformGroup::~TransformGroup()
{
}

HRESULT DirectUI::TransformGroup::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::TransformGroup)))
    {
        *ppObject = static_cast<DirectUI::TransformGroup*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::ITransformGroup)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::ITransformGroup*>(this);
    }
    else
    {
        RRETURN(DirectUI::Transform::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::TransformGroup::get_Children(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Transform*>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TransformGroup_Children, ppValue));
}
IFACEMETHODIMP DirectUI::TransformGroup::put_Children(_In_opt_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Transform*>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TransformGroup_Children, pValue));
}
IFACEMETHODIMP DirectUI::TransformGroup::get_Value(_Out_ ABI::Microsoft::UI::Xaml::Media::Matrix* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TransformGroup_Value, pValue));
}

// Events.

// Methods.

HRESULT DirectUI::TransformGroupFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::ITransformGroupStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::ITransformGroupStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::TransformGroupFactory::get_ChildrenProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::TransformGroup_Children, ppValue));
}


// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_TransformGroup()
    {
        RRETURN(ctl::ActivationFactoryCreator<TransformGroupFactory>::CreateActivationFactory());
    }
}
