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

#include "DiscreteDoubleKeyFrame.g.h"

// Constructors/destructors.
DirectUI::DiscreteDoubleKeyFrame::DiscreteDoubleKeyFrame()
{
}

DirectUI::DiscreteDoubleKeyFrame::~DiscreteDoubleKeyFrame()
{
}

HRESULT DirectUI::DiscreteDoubleKeyFrame::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::DiscreteDoubleKeyFrame)))
    {
        *ppObject = static_cast<DirectUI::DiscreteDoubleKeyFrame*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame*>(this);
    }
    else
    {
        RRETURN(DirectUI::DoubleKeyFrame::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_DiscreteDoubleKeyFrame()
    {
        RRETURN(ctl::BetterActivationFactoryCreator::GetForDO(KnownTypeIndex::DiscreteDoubleKeyFrame));
    }
}
