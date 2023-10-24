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

#include "FontIconSource.g.h"
#include "FontFamily.g.h"

// Constructors/destructors.
DirectUI::FontIconSourceGenerated::FontIconSourceGenerated()
{
}

DirectUI::FontIconSourceGenerated::~FontIconSourceGenerated()
{
}

HRESULT DirectUI::FontIconSourceGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::FontIconSource)))
    {
        *ppObject = static_cast<DirectUI::FontIconSource*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IFontIconSource)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::Controls::IFontIconSource>(this);
    }
    else
    {
        RRETURN(DirectUI::IconSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::get_FontFamily(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IFontFamily** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIconSource_FontFamily, ppValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::put_FontFamily(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IFontFamily* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIconSource_FontFamily, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::get_FontSize(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIconSource_FontSize, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::put_FontSize(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIconSource_FontSize, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::get_FontStyle(_Out_ ABI::Windows::UI::Text::FontStyle* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIconSource_FontStyle, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::put_FontStyle(_In_ ABI::Windows::UI::Text::FontStyle value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIconSource_FontStyle, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::get_FontWeight(_Out_ ABI::Windows::UI::Text::FontWeight* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIconSource_FontWeight, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::put_FontWeight(_In_ ABI::Windows::UI::Text::FontWeight value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIconSource_FontWeight, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::get_Glyph(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIconSource_Glyph, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::put_Glyph(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIconSource_Glyph, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::get_IsTextScaleFactorEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIconSource_IsTextScaleFactorEnabled, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::put_IsTextScaleFactorEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIconSource_IsTextScaleFactorEnabled, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::get_MirroredWhenRightToLeft(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FontIconSource_MirroredWhenRightToLeft, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::FontIconSourceGenerated::put_MirroredWhenRightToLeft(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FontIconSource_MirroredWhenRightToLeft, value));
}

// Events.

// Methods.

HRESULT DirectUI::FontIconSourceFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IFontIconSourceFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IFontIconSourceFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IFontIconSourceStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IFontIconSourceStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::FontIconSourceFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IFontIconSource** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IFontIconSource);
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
IFACEMETHODIMP DirectUI::FontIconSourceFactory::get_GlyphProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIconSource_Glyph, ppValue));
}
IFACEMETHODIMP DirectUI::FontIconSourceFactory::get_FontSizeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIconSource_FontSize, ppValue));
}
IFACEMETHODIMP DirectUI::FontIconSourceFactory::get_FontFamilyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIconSource_FontFamily, ppValue));
}
IFACEMETHODIMP DirectUI::FontIconSourceFactory::get_FontWeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIconSource_FontWeight, ppValue));
}
IFACEMETHODIMP DirectUI::FontIconSourceFactory::get_FontStyleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIconSource_FontStyle, ppValue));
}
IFACEMETHODIMP DirectUI::FontIconSourceFactory::get_IsTextScaleFactorEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIconSource_IsTextScaleFactorEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::FontIconSourceFactory::get_MirroredWhenRightToLeftProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FontIconSource_MirroredWhenRightToLeft, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_FontIconSource()
    {
        RRETURN(ctl::ActivationFactoryCreator<FontIconSourceFactory>::CreateActivationFactory());
    }
}