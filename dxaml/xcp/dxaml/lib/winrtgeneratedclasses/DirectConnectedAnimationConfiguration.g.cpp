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

#include "DirectConnectedAnimationConfiguration.g.h"

// Constructors/destructors.
DirectUI::DirectConnectedAnimationConfigurationGenerated::DirectConnectedAnimationConfigurationGenerated()
{
}

DirectUI::DirectConnectedAnimationConfigurationGenerated::~DirectConnectedAnimationConfigurationGenerated()
{
}

HRESULT DirectUI::DirectConnectedAnimationConfigurationGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::DirectConnectedAnimationConfiguration)))
    {
        *ppObject = static_cast<DirectUI::DirectConnectedAnimationConfiguration*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration*>(this);
    }
    else
    {
        RRETURN(DirectUI::ConnectedAnimationConfiguration::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.

HRESULT DirectUI::DirectConnectedAnimationConfigurationFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfigurationFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfigurationFactory*>(this);
    }
    else
    {
        RRETURN(ctl::AggregableActivationFactory<DirectUI::DirectConnectedAnimationConfiguration>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::DirectConnectedAnimationConfigurationFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration** ppInstance)
{


    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithAggregableActivationFactory<DirectUI::DirectConnectedAnimationConfiguration,ABI::Microsoft::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration>(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_DirectConnectedAnimationConfiguration()
    {
        RRETURN(ctl::ActivationFactoryCreator<DirectConnectedAnimationConfigurationFactory>::CreateActivationFactory());
    }
}
