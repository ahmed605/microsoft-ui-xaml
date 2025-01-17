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

#include "FadeOutThemeAnimation.g.h"

// Constructors/destructors.
DirectUI::FadeOutThemeAnimationGenerated::FadeOutThemeAnimationGenerated()
{
}

DirectUI::FadeOutThemeAnimationGenerated::~FadeOutThemeAnimationGenerated()
{
}

HRESULT DirectUI::FadeOutThemeAnimationGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::FadeOutThemeAnimation)))
    {
        *ppObject = static_cast<DirectUI::FadeOutThemeAnimation*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IFadeOutThemeAnimation)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IFadeOutThemeAnimation*>(this);
    }
    else
    {
        RRETURN(DirectUI::DynamicTimeline::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::FadeOutThemeAnimationGenerated::get_TargetName(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FadeOutThemeAnimation_TargetName, pValue));
}
IFACEMETHODIMP DirectUI::FadeOutThemeAnimationGenerated::put_TargetName(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FadeOutThemeAnimation_TargetName, value));
}

// Events.

// Methods.

HRESULT DirectUI::FadeOutThemeAnimationFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics*>(this);
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
IFACEMETHODIMP DirectUI::FadeOutThemeAnimationFactory::get_TargetNameProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::FadeOutThemeAnimation_TargetName, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_FadeOutThemeAnimation()
    {
        RRETURN(ctl::ActivationFactoryCreator<FadeOutThemeAnimationFactory>::CreateActivationFactory());
    }
}
