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

#include "FontIcon.g.h"
#include "FontFamily.g.h"

// Constructors/destructors.
DirectUI::FontIcon::FontIcon()
{
}

DirectUI::FontIcon::~FontIcon()
{
}

HRESULT DirectUI::FontIcon::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::FontIcon)))
    {
        *ppObject = static_cast<DirectUI::FontIcon*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IFontIcon)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IFontIcon*>(this);
    }
    else
    {
        RRETURN(DirectUI::IconElement::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::FontIcon::get_FontFamily(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IFontFamily** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIcon_FontFamily, ppValue));
}
IFACEMETHODIMP DirectUI::FontIcon::put_FontFamily(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IFontFamily* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIcon_FontFamily, pValue));
}
IFACEMETHODIMP DirectUI::FontIcon::get_FontSize(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIcon_FontSize, pValue));
}
IFACEMETHODIMP DirectUI::FontIcon::put_FontSize(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIcon_FontSize, value));
}
IFACEMETHODIMP DirectUI::FontIcon::get_FontStyle(_Out_ ABI::Windows::UI::Text::FontStyle* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIcon_FontStyle, pValue));
}
IFACEMETHODIMP DirectUI::FontIcon::put_FontStyle(_In_ ABI::Windows::UI::Text::FontStyle value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIcon_FontStyle, value));
}
IFACEMETHODIMP DirectUI::FontIcon::get_FontWeight(_Out_ ABI::Windows::UI::Text::FontWeight* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIcon_FontWeight, pValue));
}
IFACEMETHODIMP DirectUI::FontIcon::put_FontWeight(_In_ ABI::Windows::UI::Text::FontWeight value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIcon_FontWeight, value));
}
IFACEMETHODIMP DirectUI::FontIcon::get_Glyph(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIcon_Glyph, pValue));
}
IFACEMETHODIMP DirectUI::FontIcon::put_Glyph(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIcon_Glyph, value));
}
IFACEMETHODIMP DirectUI::FontIcon::get_IsTextScaleFactorEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIcon_IsTextScaleFactorEnabled, pValue));
}
IFACEMETHODIMP DirectUI::FontIcon::put_IsTextScaleFactorEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIcon_IsTextScaleFactorEnabled, value));
}
IFACEMETHODIMP DirectUI::FontIcon::get_MirroredWhenRightToLeft(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIcon_MirroredWhenRightToLeft, pValue));
}
IFACEMETHODIMP DirectUI::FontIcon::put_MirroredWhenRightToLeft(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIcon_MirroredWhenRightToLeft, value));
}

// Events.

// Methods.

HRESULT DirectUI::FontIconFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IFontIconFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IFontIconFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IFontIconStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IFontIconStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::FontIconFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IFontIcon** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IFontIcon);
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
IFACEMETHODIMP DirectUI::FontIconFactory::get_GlyphProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIcon_Glyph, ppValue));
}
IFACEMETHODIMP DirectUI::FontIconFactory::get_FontSizeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIcon_FontSize, ppValue));
}
IFACEMETHODIMP DirectUI::FontIconFactory::get_FontFamilyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIcon_FontFamily, ppValue));
}
IFACEMETHODIMP DirectUI::FontIconFactory::get_FontWeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIcon_FontWeight, ppValue));
}
IFACEMETHODIMP DirectUI::FontIconFactory::get_FontStyleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIcon_FontStyle, ppValue));
}
IFACEMETHODIMP DirectUI::FontIconFactory::get_IsTextScaleFactorEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIcon_IsTextScaleFactorEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::FontIconFactory::get_MirroredWhenRightToLeftProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIcon_MirroredWhenRightToLeft, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_FontIcon()
    {
        RRETURN(ctl::ActivationFactoryCreator<FontIconFactory>::CreateActivationFactory());
    }
}