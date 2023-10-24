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

#include "CalendarViewAutomationPeer.g.h"
#include "IRawElementProviderSimple.g.h"

// Constructors/destructors.
DirectUI::CalendarViewAutomationPeerGenerated::CalendarViewAutomationPeerGenerated()
{
}

DirectUI::CalendarViewAutomationPeerGenerated::~CalendarViewAutomationPeerGenerated()
{
}

HRESULT DirectUI::CalendarViewAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::CalendarViewAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::CalendarViewAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::IGridProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::IGridProvider*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::ISelectionProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::ISelectionProvider*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::ITableProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::ITableProvider*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::IValueProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::IValueProvider*>(this);
    }
    else
    {
        RRETURN(DirectUI::FrameworkElementAutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::CalendarViewAutomationPeerGenerated::get_CanSelectMultiple(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<CalendarViewAutomationPeer*>(this)->get_CanSelectMultipleImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewAutomationPeerGenerated::get_ColumnCount(_Out_ INT* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<CalendarViewAutomationPeer*>(this)->get_ColumnCountImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewAutomationPeerGenerated::get_IsReadOnly(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<CalendarViewAutomationPeer*>(this)->get_IsReadOnlyImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewAutomationPeerGenerated::get_IsSelectionRequired(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<CalendarViewAutomationPeer*>(this)->get_IsSelectionRequiredImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewAutomationPeerGenerated::get_RowCount(_Out_ INT* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<CalendarViewAutomationPeer*>(this)->get_RowCountImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewAutomationPeerGenerated::get_RowOrColumnMajor(_Out_ ABI::Microsoft::UI::Xaml::Automation::RowOrColumnMajor* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<CalendarViewAutomationPeer*>(this)->get_RowOrColumnMajorImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewAutomationPeerGenerated::get_Value(_Out_ HSTRING* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<CalendarViewAutomationPeer*>(this)->get_ValueImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::CalendarViewAutomationPeerGenerated::GetColumnHeaders(_Out_ UINT* pReturnValueCount, _Out_writes_to_ptr_(*pReturnValueCount) ABI::Microsoft::UI::Xaml::Automation::Provider::IIRawElementProviderSimple*** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::CalendarViewAutomationPeer_GetColumnHeaders);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarViewAutomationPeer*>(this)->GetColumnHeadersImpl(pReturnValueCount, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewAutomationPeerGenerated::GetItem(_In_ INT row, _In_ INT column, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Provider::IIRawElementProviderSimple** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::CalendarViewAutomationPeer_GetItem);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarViewAutomationPeer*>(this)->GetItemImpl(row, column, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewAutomationPeerGenerated::GetRowHeaders(_Out_ UINT* pReturnValueCount, _Out_writes_to_ptr_(*pReturnValueCount) ABI::Microsoft::UI::Xaml::Automation::Provider::IIRawElementProviderSimple*** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::CalendarViewAutomationPeer_GetRowHeaders);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarViewAutomationPeer*>(this)->GetRowHeadersImpl(pReturnValueCount, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewAutomationPeerGenerated::GetSelection(_Out_ UINT* pReturnValueCount, _Out_writes_to_ptr_(*pReturnValueCount) ABI::Microsoft::UI::Xaml::Automation::Provider::IIRawElementProviderSimple*** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::CalendarViewAutomationPeer_GetSelection);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarViewAutomationPeer*>(this)->GetSelectionImpl(pReturnValueCount, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewAutomationPeerGenerated::SetValue(_In_ HSTRING value)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::CalendarViewAutomationPeer_SetValue);
    }
    ARG_NOTNULL(value, "value");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarViewAutomationPeer*>(this)->SetValueImpl(value));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
}