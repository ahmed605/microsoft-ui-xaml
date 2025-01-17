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

#include "MenuFlyoutItemBase.g.h"

// Constructors/destructors.
DirectUI::MenuFlyoutItemBaseGenerated::MenuFlyoutItemBaseGenerated()
{
}

DirectUI::MenuFlyoutItemBaseGenerated::~MenuFlyoutItemBaseGenerated()
{
}

HRESULT DirectUI::MenuFlyoutItemBaseGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::MenuFlyoutItemBase)))
    {
        *ppObject = static_cast<DirectUI::MenuFlyoutItemBase*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutItemBase)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutItemBase*>(this);
    }
    else
    {
        RRETURN(DirectUI::Control::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.

HRESULT DirectUI::MenuFlyoutItemBaseFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutItemBaseFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutItemBaseFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
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
    _Check_return_ IActivationFactory* CreateActivationFactory_MenuFlyoutItemBase()
    {
        RRETURN(ctl::ActivationFactoryCreator<MenuFlyoutItemBaseFactory>::CreateActivationFactory());
    }
}
