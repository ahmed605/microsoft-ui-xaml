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

#include "ImageSource.g.h"

// Constructors/destructors.
DirectUI::ImageSource::ImageSource()
{
}

DirectUI::ImageSource::~ImageSource()
{
}

HRESULT DirectUI::ImageSource::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ImageSource)))
    {
        *ppObject = static_cast<DirectUI::ImageSource*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IImageSource)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IImageSource*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.

HRESULT DirectUI::ImageSourceFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IImageSourceFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IImageSourceFactory*>(this);
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

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ImageSource()
    {
        RRETURN(ctl::ActivationFactoryCreator<ImageSourceFactory>::CreateActivationFactory());
    }
}
