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

#include "RelativeSource.g.h"

// Constructors/destructors.
DirectUI::RelativeSource::RelativeSource()
{
}

DirectUI::RelativeSource::~RelativeSource()
{
}

HRESULT DirectUI::RelativeSource::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::RelativeSource)))
    {
        *ppObject = static_cast<DirectUI::RelativeSource*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Data::IRelativeSource)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Data::IRelativeSource*>(this);
    }
    else
    {
        RRETURN(DirectUI::MarkupExtensionBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::RelativeSource::get_Mode(_Out_ ABI::Microsoft::UI::Xaml::Data::RelativeSourceMode* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RelativeSource_Mode, pValue));
}
IFACEMETHODIMP DirectUI::RelativeSource::put_Mode(_In_ ABI::Microsoft::UI::Xaml::Data::RelativeSourceMode value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RelativeSource_Mode, value));
}

// Events.

// Methods.

HRESULT DirectUI::RelativeSourceFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Data::IRelativeSourceFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Data::IRelativeSourceFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::RelativeSourceFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Data::IRelativeSource** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Data::IRelativeSource);
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


// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_RelativeSource()
    {
        RRETURN(ctl::ActivationFactoryCreator<RelativeSourceFactory>::CreateActivationFactory());
    }
}