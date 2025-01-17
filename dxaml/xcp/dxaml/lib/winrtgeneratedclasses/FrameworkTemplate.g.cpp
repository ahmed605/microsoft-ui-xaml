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

#include "FrameworkTemplate.g.h"
#include "TemplateContent.g.h"

// Constructors/destructors.
DirectUI::FrameworkTemplate::FrameworkTemplate()
{
}

DirectUI::FrameworkTemplate::~FrameworkTemplate()
{
}

HRESULT DirectUI::FrameworkTemplate::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::FrameworkTemplate)))
    {
        *ppObject = static_cast<DirectUI::FrameworkTemplate*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IFrameworkTemplate)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IFrameworkTemplate*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT DirectUI::FrameworkTemplate::get_EventRoot(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(m_pEventRoot.CopyTo(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::FrameworkTemplate::put_EventRoot(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    SetPtrValue(m_pEventRoot, pValue);
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::FrameworkTemplate::get_Template(_Outptr_result_maybenull_ DirectUI::TemplateContent** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::FrameworkTemplate_Template, ppValue));
}
_Check_return_ HRESULT DirectUI::FrameworkTemplate::put_Template(_In_opt_ DirectUI::TemplateContent* pValue)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::FrameworkTemplate_Template, pValue));
}

// Events.

// Methods.

HRESULT DirectUI::FrameworkTemplateFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IFrameworkTemplateFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IFrameworkTemplateFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableAbstractCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::FrameworkTemplateFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IFrameworkTemplate** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::IFrameworkTemplate);
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
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableAbstractCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.


// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_FrameworkTemplate()
    {
        RRETURN(ctl::ActivationFactoryCreator<FrameworkTemplateFactory>::CreateActivationFactory());
    }
}
