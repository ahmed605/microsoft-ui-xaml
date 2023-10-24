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

#include "DataContextChangedEventArgs.g.h"

// Constructors/destructors.
DirectUI::DataContextChangedEventArgs::DataContextChangedEventArgs(): m_handled()
{
}

DirectUI::DataContextChangedEventArgs::~DataContextChangedEventArgs()
{
}

HRESULT DirectUI::DataContextChangedEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::DataContextChangedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::DataContextChangedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IDataContextChangedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IDataContextChangedEventArgs*>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::DataContextChangedEventArgs::get_Handled(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(CValueBoxer::CopyValue(m_handled, pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DataContextChangedEventArgs::put_Handled(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    IFC(CValueBoxer::CopyValue(value, &m_handled));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DataContextChangedEventArgs::get_NewValue(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(m_pNewValue.CopyTo(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::DataContextChangedEventArgs::put_NewValue(_In_opt_ IInspectable* pValue)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    SetPtrValue(m_pNewValue, pValue);
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_DataContextChangedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}