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

#include "IconSource.g.h"
#include "Brush.g.h"
#include "IconElement.g.h"

// Constructors/destructors.
DirectUI::IconSourceGenerated::IconSourceGenerated()
{
}

DirectUI::IconSourceGenerated::~IconSourceGenerated()
{
}

HRESULT DirectUI::IconSourceGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::IconSource)))
    {
        *ppObject = static_cast<DirectUI::IconSource*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IIconSource)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IIconSource*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IIconSourceOverrides)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IIconSourceOverrides*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::IconSourceGenerated::get_Foreground(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::IconSource_Foreground, ppValue));
}
IFACEMETHODIMP DirectUI::IconSourceGenerated::put_Foreground(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::IconSource_Foreground, pValue));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::IconSourceGenerated::CreateIconElement(_Outptr_ ABI::Microsoft::UI::Xaml::Controls::IIconElement** ppReturnValue)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::IIconSourceOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->CreateIconElementCore(ppReturnValue));
    }
    else
    {
        IFC(CreateIconElementCore(ppReturnValue));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}

IFACEMETHODIMP DirectUI::IconSourceGenerated::CreateIconElementCore(_Outptr_ ABI::Microsoft::UI::Xaml::Controls::IIconElement** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::IconSource_CreateIconElement);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<IconSource*>(this)->CreateIconElementCoreImpl(ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::IconSourceGenerated::GetIconElementPropertyCore(_In_ ABI::Microsoft::UI::Xaml::IDependencyProperty* pIconSourceProperty, _Outptr_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::IconSource_GetIconElementPropertyCore);
    }
    ARG_NOTNULL(pIconSourceProperty, "iconSourceProperty");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<IconSource*>(this)->GetIconElementPropertyCoreImpl(pIconSourceProperty, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::IconSourceGenerated::GetIconElementPropertyCoreProtected(_In_ ABI::Microsoft::UI::Xaml::IDependencyProperty* pIconSourceProperty, _Outptr_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppReturnValue)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::IIconSourceOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->GetIconElementPropertyCore(pIconSourceProperty, ppReturnValue));
    }
    else
    {
        IFC(GetIconElementPropertyCore(pIconSourceProperty, ppReturnValue));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}

HRESULT DirectUI::IconSourceFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IIconSourceFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IIconSourceFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IIconSourceStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IIconSourceStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableAbstractCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::IconSourceFactory::get_ForegroundProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::IconSource_Foreground, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_IconSource()
    {
        RRETURN(ctl::ActivationFactoryCreator<IconSourceFactory>::CreateActivationFactory());
    }
}