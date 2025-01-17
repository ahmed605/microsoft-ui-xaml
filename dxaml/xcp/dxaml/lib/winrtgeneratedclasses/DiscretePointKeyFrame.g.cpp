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

#include "DiscretePointKeyFrame.g.h"

// Constructors/destructors.
DirectUI::DiscretePointKeyFrame::DiscretePointKeyFrame()
{
}

DirectUI::DiscretePointKeyFrame::~DiscretePointKeyFrame()
{
}

HRESULT DirectUI::DiscretePointKeyFrame::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::DiscretePointKeyFrame)))
    {
        *ppObject = static_cast<DirectUI::DiscretePointKeyFrame*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IDiscretePointKeyFrame)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IDiscretePointKeyFrame*>(this);
    }
    else
    {
        RRETURN(DirectUI::PointKeyFrame::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_DiscretePointKeyFrame()
    {
        RRETURN(ctl::BetterActivationFactoryCreator::GetForDO(KnownTypeIndex::DiscretePointKeyFrame));
    }
}
