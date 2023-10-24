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

#include "ColorPaletteResources.g.h"

// Constructors/destructors.
DirectUI::ColorPaletteResources::ColorPaletteResources()
{
}

DirectUI::ColorPaletteResources::~ColorPaletteResources()
{
}

HRESULT DirectUI::ColorPaletteResources::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ColorPaletteResources)))
    {
        *ppObject = static_cast<DirectUI::ColorPaletteResources*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IColorPaletteResources)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IColorPaletteResources*>(this);
    }
    else
    {
        RRETURN(DirectUI::ResourceDictionary::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_Accent(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_Accent, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_Accent(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_Accent, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_AltHigh(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_AltHigh, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_AltHigh(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_AltHigh, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_AltLow(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_AltLow, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_AltLow(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_AltLow, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_AltMedium(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_AltMedium, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_AltMedium(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_AltMedium, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_AltMediumHigh(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_AltMediumHigh, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_AltMediumHigh(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_AltMediumHigh, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_AltMediumLow(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_AltMediumLow, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_AltMediumLow(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_AltMediumLow, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_BaseHigh(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_BaseHigh, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_BaseHigh(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_BaseHigh, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_BaseLow(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_BaseLow, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_BaseLow(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_BaseLow, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_BaseMedium(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_BaseMedium, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_BaseMedium(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_BaseMedium, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_BaseMediumHigh(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_BaseMediumHigh, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_BaseMediumHigh(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_BaseMediumHigh, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_BaseMediumLow(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_BaseMediumLow, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_BaseMediumLow(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_BaseMediumLow, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeAltLow(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeAltLow, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeAltLow(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeAltLow, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeBlackHigh(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeBlackHigh, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeBlackHigh(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeBlackHigh, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeBlackLow(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeBlackLow, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeBlackLow(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeBlackLow, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeBlackMedium(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeBlackMedium, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeBlackMedium(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeBlackMedium, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeBlackMediumLow(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeBlackMediumLow, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeBlackMediumLow(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeBlackMediumLow, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeDisabledHigh(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeDisabledHigh, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeDisabledHigh(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeDisabledHigh, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeDisabledLow(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeDisabledLow, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeDisabledLow(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeDisabledLow, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeGray(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeGray, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeGray(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeGray, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeHigh(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeHigh, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeHigh(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeHigh, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeLow(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeLow, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeLow(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeLow, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeMedium(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeMedium, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeMedium(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeMedium, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeMediumLow(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeMediumLow, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeMediumLow(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeMediumLow, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ChromeWhite(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeWhite, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ChromeWhite(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ChromeWhite, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ErrorText(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ErrorText, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ErrorText(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ErrorText, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ListLow(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ListLow, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ListLow(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ListLow, pValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::get_ListMedium(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ListMedium, ppValue));
}
IFACEMETHODIMP DirectUI::ColorPaletteResources::put_ListMedium(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ColorPaletteResources_ListMedium, pValue));
}

// Events.

// Methods.

HRESULT DirectUI::ColorPaletteResourcesFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IColorPaletteResourcesFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IColorPaletteResourcesFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::ColorPaletteResourcesFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IColorPaletteResources** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::IColorPaletteResources);
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
    _Check_return_ IActivationFactory* CreateActivationFactory_ColorPaletteResources()
    {
        RRETURN(ctl::ActivationFactoryCreator<ColorPaletteResourcesFactory>::CreateActivationFactory());
    }
}