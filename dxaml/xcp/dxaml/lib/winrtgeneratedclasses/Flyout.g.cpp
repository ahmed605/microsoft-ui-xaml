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

#include "Flyout.g.h"
#include "Style.g.h"
#include "UIElement.g.h"

// Constructors/destructors.
DirectUI::FlyoutGenerated::FlyoutGenerated()
{
}

DirectUI::FlyoutGenerated::~FlyoutGenerated()
{
}

HRESULT DirectUI::FlyoutGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Flyout)))
    {
        *ppObject = static_cast<DirectUI::Flyout*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IFlyout)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IFlyout*>(this);
    }
    else
    {
        RRETURN(DirectUI::FlyoutBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::FlyoutGenerated::get_Content(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Flyout_Content, ppValue));
}
IFACEMETHODIMP DirectUI::FlyoutGenerated::put_Content(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Flyout_Content, pValue));
}
IFACEMETHODIMP DirectUI::FlyoutGenerated::get_FlyoutPresenterStyle(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IStyle** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Flyout_FlyoutPresenterStyle, ppValue));
}
IFACEMETHODIMP DirectUI::FlyoutGenerated::put_FlyoutPresenterStyle(_In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Flyout_FlyoutPresenterStyle, pValue));
}

// Events.

// Methods.

HRESULT DirectUI::FlyoutFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IFlyoutFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IFlyoutFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IFlyoutStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IFlyoutStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::FlyoutFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IFlyout** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IFlyout);
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
IFACEMETHODIMP DirectUI::FlyoutFactory::get_ContentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Flyout_Content, ppValue));
}
IFACEMETHODIMP DirectUI::FlyoutFactory::get_FlyoutPresenterStyleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Flyout_FlyoutPresenterStyle, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Flyout()
    {
        RRETURN(ctl::ActivationFactoryCreator<FlyoutFactory>::CreateActivationFactory());
    }
}