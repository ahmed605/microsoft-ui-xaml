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

#include "PropertyMetadata.g.h"

// Constructors/destructors.
DirectUI::PropertyMetadataGenerated::PropertyMetadataGenerated()
{
}

DirectUI::PropertyMetadataGenerated::~PropertyMetadataGenerated()
{
}

HRESULT DirectUI::PropertyMetadataGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::PropertyMetadata)))
    {
        *ppObject = static_cast<DirectUI::PropertyMetadata*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IPropertyMetadata)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IPropertyMetadata*>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::PropertyMetadataGenerated::get_CreateDefaultValueCallback(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::ICreateDefaultValueCallback** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    
    IFC(m_pCreateDefaultValueCallback.CopyTo(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::PropertyMetadataGenerated::put_CreateDefaultValueCallback(_In_opt_ ABI::Microsoft::UI::Xaml::ICreateDefaultValueCallback* pValue)
{
    HRESULT hr = S_OK;
    
    m_pCreateDefaultValueCallback = pValue;
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::PropertyMetadataGenerated::get_DefaultValue(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    
    IFC(m_pDefaultValue.CopyTo(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::PropertyMetadataGenerated::put_DefaultValue(_In_opt_ IInspectable* pValue)
{
    HRESULT hr = S_OK;
    
    m_pDefaultValue = pValue;
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::PropertyMetadataGenerated::get_PropertyChangedCallback(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IPropertyChangedCallback** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    
    IFC(m_pPropertyChangedCallback.CopyTo(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::PropertyMetadataGenerated::put_PropertyChangedCallback(_In_opt_ ABI::Microsoft::UI::Xaml::IPropertyChangedCallback* pValue)
{
    HRESULT hr = S_OK;
    
    m_pPropertyChangedCallback = pValue;
    RRETURN(hr);
}

// Events.

// Methods.

HRESULT DirectUI::PropertyMetadataFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IPropertyMetadataFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IPropertyMetadataFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IPropertyMetadataStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IPropertyMetadataStatics*>(this);
    }
    else
    {
        RRETURN(ctl::AggregableActivationFactory<DirectUI::PropertyMetadata>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

_Check_return_ HRESULT DirectUI::PropertyMetadataFactory::CheckActivationAllowed()
{
    RRETURN(S_OK);
}

// Factory methods.
IFACEMETHODIMP DirectUI::PropertyMetadataFactory::CreateInstanceWithDefaultValue(_In_opt_ IInspectable* pDefaultValue, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IPropertyMetadata** ppInstance)
{
    HRESULT hr = S_OK;
    
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceWithDefaultValueImpl(pDefaultValue, pOuter, ppInner, ppInstance));
Cleanup:
    return hr;
}
IFACEMETHODIMP DirectUI::PropertyMetadataFactory::CreateInstanceWithDefaultValueAndCallback(_In_opt_ IInspectable* pDefaultValue, _In_opt_ ABI::Microsoft::UI::Xaml::IPropertyChangedCallback* pPropertyChangedCallback, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IPropertyMetadata** ppInstance)
{
    HRESULT hr = S_OK;
    
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceWithDefaultValueAndCallbackImpl(pDefaultValue, pPropertyChangedCallback, pOuter, ppInner, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.
IFACEMETHODIMP DirectUI::PropertyMetadataFactory::CreateWithDefaultValue(_In_opt_ IInspectable* pDefaultValue, _Outptr_ ABI::Microsoft::UI::Xaml::IPropertyMetadata** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::PropertyMetadata_CreateWithDefaultValue);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    
    IFC(CreateWithDefaultValueImpl(pDefaultValue, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::PropertyMetadataFactory::CreateWithDefaultValueAndCallback(_In_opt_ IInspectable* pDefaultValue, _In_opt_ ABI::Microsoft::UI::Xaml::IPropertyChangedCallback* pPropertyChangedCallback, _Outptr_ ABI::Microsoft::UI::Xaml::IPropertyMetadata** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::PropertyMetadata_CreateWithDefaultValueAndCallback);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    
    IFC(CreateWithDefaultValueAndCallbackImpl(pDefaultValue, pPropertyChangedCallback, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::PropertyMetadataFactory::CreateWithFactory(_In_ ABI::Microsoft::UI::Xaml::ICreateDefaultValueCallback* pCreateDefaultValueCallback, _Outptr_ ABI::Microsoft::UI::Xaml::IPropertyMetadata** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::PropertyMetadata_CreateWithFactory);
    }
    ARG_NOTNULL(pCreateDefaultValueCallback, "createDefaultValueCallback");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    
    IFC(CreateWithFactoryImpl(pCreateDefaultValueCallback, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::PropertyMetadataFactory::CreateWithFactoryAndCallback(_In_ ABI::Microsoft::UI::Xaml::ICreateDefaultValueCallback* pCreateDefaultValueCallback, _In_opt_ ABI::Microsoft::UI::Xaml::IPropertyChangedCallback* pPropertyChangedCallback, _Outptr_ ABI::Microsoft::UI::Xaml::IPropertyMetadata** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::PropertyMetadata_CreateWithFactoryAndCallback);
    }
    ARG_NOTNULL(pCreateDefaultValueCallback, "createDefaultValueCallback");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    
    IFC(CreateWithFactoryAndCallbackImpl(pCreateDefaultValueCallback, pPropertyChangedCallback, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_PropertyMetadata()
    {
        RRETURN(ctl::ActivationFactoryCreator<PropertyMetadataFactory>::CreateActivationFactory());
    }
}
