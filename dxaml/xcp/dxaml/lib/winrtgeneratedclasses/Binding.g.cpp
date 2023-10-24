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

#include "Binding.g.h"
#include "PropertyPath.g.h"
#include "RelativeSource.g.h"

// Constructors/destructors.
DirectUI::BindingGenerated::BindingGenerated()
{
}

DirectUI::BindingGenerated::~BindingGenerated()
{
}

HRESULT DirectUI::BindingGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Binding)))
    {
        *ppObject = static_cast<DirectUI::Binding*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Data::IBinding)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Data::IBinding*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ISupportInitialize)))
    {
        *ppObject = static_cast<DirectUI::ISupportInitialize*>(this);
    }
    else
    {
        RRETURN(DirectUI::BindingBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::BindingGenerated::get_Converter(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Data::IValueConverter** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Binding_Converter, ppValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::put_Converter(_In_opt_ ABI::Microsoft::UI::Xaml::Data::IValueConverter* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Binding_Converter, pValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::get_ConverterLanguage(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Binding_ConverterLanguage, pValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::put_ConverterLanguage(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Binding_ConverterLanguage, value));
}
IFACEMETHODIMP DirectUI::BindingGenerated::get_ConverterParameter(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Binding_ConverterParameter, ppValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::put_ConverterParameter(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Binding_ConverterParameter, pValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::get_ElementName(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Binding_ElementName, pValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::put_ElementName(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Binding_ElementName, value));
}
IFACEMETHODIMP DirectUI::BindingGenerated::get_FallbackValue(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Binding_FallbackValue, ppValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::put_FallbackValue(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Binding_FallbackValue, pValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::get_Mode(_Out_ ABI::Microsoft::UI::Xaml::Data::BindingMode* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Binding_Mode, pValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::put_Mode(_In_ ABI::Microsoft::UI::Xaml::Data::BindingMode value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Binding_Mode, value));
}
IFACEMETHODIMP DirectUI::BindingGenerated::get_Path(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IPropertyPath** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<Binding*>(this)->get_PathImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::BindingGenerated::put_Path(_In_opt_ ABI::Microsoft::UI::Xaml::IPropertyPath* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Binding*>(this)->put_PathImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::BindingGenerated::get_RelativeSource(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Data::IRelativeSource** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Binding_RelativeSource, ppValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::put_RelativeSource(_In_opt_ ABI::Microsoft::UI::Xaml::Data::IRelativeSource* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Binding_RelativeSource, pValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::get_Source(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Binding_Source, ppValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::put_Source(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Binding_Source, pValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::get_TargetNullValue(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Binding_TargetNullValue, ppValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::put_TargetNullValue(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Binding_TargetNullValue, pValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::get_UpdateSourceTrigger(_Out_ ABI::Microsoft::UI::Xaml::Data::UpdateSourceTrigger* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Binding_UpdateSourceTrigger, pValue));
}
IFACEMETHODIMP DirectUI::BindingGenerated::put_UpdateSourceTrigger(_In_ ABI::Microsoft::UI::Xaml::Data::UpdateSourceTrigger value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Binding_UpdateSourceTrigger, value));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::BindingGenerated::BeginInit()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::Binding_BeginInit);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Binding*>(this)->BeginInitImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::BindingGenerated::EndInit(_In_opt_ DirectUI::XamlServiceProviderContext* pContext)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::Binding_EndInit);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Binding*>(this)->EndInitImpl(pContext));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::BindingFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Data::IBindingFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Data::IBindingFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::BindingFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Data::IBinding** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Data::IBinding);
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
    _Check_return_ IActivationFactory* CreateActivationFactory_Binding()
    {
        RRETURN(ctl::ActivationFactoryCreator<BindingFactory>::CreateActivationFactory());
    }
}