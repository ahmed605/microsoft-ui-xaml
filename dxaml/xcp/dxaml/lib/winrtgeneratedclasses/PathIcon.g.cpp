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

#include "PathIcon.g.h"
#include "Geometry.g.h"

// Constructors/destructors.
DirectUI::PathIcon::PathIcon()
{
}

DirectUI::PathIcon::~PathIcon()
{
}

HRESULT DirectUI::PathIcon::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::PathIcon)))
    {
        *ppObject = static_cast<DirectUI::PathIcon*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IPathIcon)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IPathIcon*>(this);
    }
    else
    {
        RRETURN(DirectUI::IconElement::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::PathIcon::get_Data(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IGeometry** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PathIcon_Data, ppValue));
}
IFACEMETHODIMP DirectUI::PathIcon::put_Data(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IGeometry* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PathIcon_Data, pValue));
}

// Events.

// Methods.

HRESULT DirectUI::PathIconFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IPathIconFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IPathIconFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IPathIconStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IPathIconStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::PathIconFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IPathIcon** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IPathIcon);
    const GUID metadataAPIGUID = MetadataAPI::GetClassInfoByIndex(GetTypeIndex())->GetGuid();
    const KnownTypeIndex typeIndex = GetTypeIndex();

    if(uuidofGUID != metadataAPIGUID)
    {
        XAML_FAIL_FAST();
    }
#endif

    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::PathIconFactory::get_DataProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PathIcon_Data, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_PathIcon()
    {
        RRETURN(ctl::ActivationFactoryCreator<PathIconFactory>::CreateActivationFactory());
    }
}