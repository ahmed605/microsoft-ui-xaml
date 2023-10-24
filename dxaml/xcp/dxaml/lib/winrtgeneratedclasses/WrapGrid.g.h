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

#pragma once

#include "OrientedVirtualizingPanel.g.h"
#include "IKeyboardNavigationPanel.g.h"

#define __WrapGrid_GUID "7892a18c-f5ca-4485-8b11-a1cd6462aa5b"

namespace DirectUI
{
    class WrapGrid;

    class __declspec(novtable) WrapGridGenerated:
        public DirectUI::OrientedVirtualizingPanel
        , public ABI::Microsoft::UI::Xaml::Controls::IWrapGrid
        , public DirectUI::IKeyboardNavigationPanel
    {
        friend class DirectUI::WrapGrid;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.WrapGrid");

        BEGIN_INTERFACE_MAP(WrapGridGenerated, DirectUI::OrientedVirtualizingPanel)
            INTERFACE_ENTRY(WrapGridGenerated, ABI::Microsoft::UI::Xaml::Controls::IWrapGrid)
            INTERFACE_ENTRY(WrapGridGenerated, DirectUI::IKeyboardNavigationPanel)
        END_INTERFACE_MAP(WrapGridGenerated, DirectUI::OrientedVirtualizingPanel)

    public:
        WrapGridGenerated();
        ~WrapGridGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::WrapGrid;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::WrapGrid;
        }

        // Properties.
        IFACEMETHOD(get_HorizontalChildrenAlignment)(_Out_ ABI::Microsoft::UI::Xaml::HorizontalAlignment* pValue) override;
        IFACEMETHOD(put_HorizontalChildrenAlignment)(_In_ ABI::Microsoft::UI::Xaml::HorizontalAlignment value) override;
        IFACEMETHOD(get_ItemHeight)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_ItemHeight)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_ItemWidth)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_ItemWidth)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_MaximumRowsOrColumns)(_Out_ INT* pValue) override;
        IFACEMETHOD(put_MaximumRowsOrColumns)(_In_ INT value) override;
        IFACEMETHOD(get_Orientation)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Orientation* pValue) override;
        IFACEMETHOD(put_Orientation)(_In_ ABI::Microsoft::UI::Xaml::Controls::Orientation value) override;
        IFACEMETHOD(get_VerticalChildrenAlignment)(_Out_ ABI::Microsoft::UI::Xaml::VerticalAlignment* pValue) override;
        IFACEMETHOD(put_VerticalChildrenAlignment)(_In_ ABI::Microsoft::UI::Xaml::VerticalAlignment value) override;

        // Events.

        // Methods.
        IFACEMETHOD(GetTargetIndexFromNavigationAction)(_In_ UINT sourceIndex, _In_ ABI::Microsoft::UI::Xaml::Controls::ElementType sourceType, _In_ ABI::Microsoft::UI::Xaml::Controls::KeyNavigationAction action, _In_ BOOLEAN allowWrap, _In_ UINT itemIndexHintForHeaderNavigation, _Out_ UINT* pComputedTargetIndex, _Out_ ABI::Microsoft::UI::Xaml::Controls::ElementType* pComputedTargetType, _Out_ BOOLEAN* pActionValidForSourceIndex) = 0;
        IFACEMETHOD(SupportsKeyNavigationAction)(_In_ ABI::Microsoft::UI::Xaml::Controls::KeyNavigationAction action, _Out_ BOOLEAN* pReturnValue) = 0;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "WrapGrid_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) WrapGridFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IWrapGridStatics
    {
        BEGIN_INTERFACE_MAP(WrapGridFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(WrapGridFactory, ABI::Microsoft::UI::Xaml::Controls::IWrapGridStatics)
        END_INTERFACE_MAP(WrapGridFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_ItemWidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ItemHeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_OrientationProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HorizontalChildrenAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_VerticalChildrenAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_MaximumRowsOrColumnsProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::WrapGrid;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}