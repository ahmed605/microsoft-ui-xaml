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


#define __CommandBarTemplateSettings_GUID "5d2ffc7f-c0c3-42f8-9e14-3a28a18a727a"

namespace DirectUI
{
    class CommandBarTemplateSettings;

    class __declspec(novtable) __declspec(uuid(__CommandBarTemplateSettings_GUID)) CommandBarTemplateSettings:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Primitives.CommandBarTemplateSettings");

        BEGIN_INTERFACE_MAP(CommandBarTemplateSettings, DirectUI::DependencyObject)
            INTERFACE_ENTRY(CommandBarTemplateSettings, ABI::Microsoft::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings)
        END_INTERFACE_MAP(CommandBarTemplateSettings, DirectUI::DependencyObject)

    public:
        CommandBarTemplateSettings();
        ~CommandBarTemplateSettings() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::CommandBarTemplateSettings;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::CommandBarTemplateSettings;
        }

        // Properties.
        IFACEMETHOD(get_ContentHeight)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_ContentHeight(_In_ DOUBLE value);
        IFACEMETHOD(get_EffectiveOverflowButtonVisibility)(_Out_ ABI::Microsoft::UI::Xaml::Visibility* pValue) override;
        _Check_return_ HRESULT put_EffectiveOverflowButtonVisibility(_In_ ABI::Microsoft::UI::Xaml::Visibility value);
        IFACEMETHOD(get_NegativeOverflowContentHeight)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_NegativeOverflowContentHeight(_In_ DOUBLE value);
        IFACEMETHOD(get_OverflowContentClipRect)(_Out_ ABI::Windows::Foundation::Rect* pValue) override;
        _Check_return_ HRESULT put_OverflowContentClipRect(_In_ ABI::Windows::Foundation::Rect value);
        IFACEMETHOD(get_OverflowContentCompactYTranslation)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_OverflowContentCompactYTranslation(_In_ DOUBLE value);
        IFACEMETHOD(get_OverflowContentHeight)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_OverflowContentHeight(_In_ DOUBLE value);
        IFACEMETHOD(get_OverflowContentHiddenYTranslation)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_OverflowContentHiddenYTranslation(_In_ DOUBLE value);
        IFACEMETHOD(get_OverflowContentHorizontalOffset)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_OverflowContentHorizontalOffset(_In_ DOUBLE value);
        IFACEMETHOD(get_OverflowContentMaxHeight)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_OverflowContentMaxHeight(_In_ DOUBLE value);
        IFACEMETHOD(get_OverflowContentMaxWidth)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_OverflowContentMaxWidth(_In_ DOUBLE value);
        IFACEMETHOD(get_OverflowContentMinimalYTranslation)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_OverflowContentMinimalYTranslation(_In_ DOUBLE value);
        IFACEMETHOD(get_OverflowContentMinWidth)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_OverflowContentMinWidth(_In_ DOUBLE value);

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}


namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) CommandBarTemplateSettingsFactory:
       public ctl::AbstractActivationFactory
    {

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        
        
        
        
        
        
        
        
        
        
        
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::CommandBarTemplateSettings;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}