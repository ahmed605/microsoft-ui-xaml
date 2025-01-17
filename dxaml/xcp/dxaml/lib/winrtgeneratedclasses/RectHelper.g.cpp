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

#include "RectHelper.g.h"


HRESULT DirectUI::RectHelperFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IRectHelperStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IRectHelperStatics*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IRectHelperStaticsPrivate)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IRectHelperStaticsPrivate*>(this);
    }
    else
    {
        RRETURN(ctl::AbstractActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.

// Attached properties.

// Static properties.
IFACEMETHODIMP DirectUI::RectHelperFactory::get_Empty(_Out_ ABI::Windows::Foundation::Rect* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckActivationAllowed());
    IFC(get_EmptyImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Static methods.
IFACEMETHODIMP DirectUI::RectHelperFactory::FromCoordinatesAndDimensions(_In_ FLOAT x, _In_ FLOAT y, _In_ FLOAT width, _In_ FLOAT height, _Out_ ABI::Windows::Foundation::Rect* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_FromCoordinatesAndDimensions);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckActivationAllowed());
    IFC(FromCoordinatesAndDimensionsImpl(x, y, width, height, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::FromPoints(_In_ ABI::Windows::Foundation::Point point1, _In_ ABI::Windows::Foundation::Point point2, _Out_ ABI::Windows::Foundation::Rect* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_FromPoints);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckActivationAllowed());
    IFC(FromPointsImpl(point1, point2, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::FromLocationAndSize(_In_ ABI::Windows::Foundation::Point location, _In_ ABI::Windows::Foundation::Size size, _Out_ ABI::Windows::Foundation::Rect* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_FromLocationAndSize);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckActivationAllowed());
    IFC(FromLocationAndSizeImpl(location, size, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::GetIsEmpty(_In_ ABI::Windows::Foundation::Rect target, _Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_GetIsEmpty);
    }
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckActivationAllowed());
    IFC(GetIsEmptyImpl(target, pValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::GetBottom(_In_ ABI::Windows::Foundation::Rect target, _Out_ FLOAT* pValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_GetBottom);
    }
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckActivationAllowed());
    IFC(GetBottomImpl(target, pValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::GetLeft(_In_ ABI::Windows::Foundation::Rect target, _Out_ FLOAT* pValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_GetLeft);
    }
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckActivationAllowed());
    IFC(GetLeftImpl(target, pValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::GetRight(_In_ ABI::Windows::Foundation::Rect target, _Out_ FLOAT* pValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_GetRight);
    }
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckActivationAllowed());
    IFC(GetRightImpl(target, pValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::GetTop(_In_ ABI::Windows::Foundation::Rect target, _Out_ FLOAT* pValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_GetTop);
    }
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckActivationAllowed());
    IFC(GetTopImpl(target, pValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::Contains(_In_ ABI::Windows::Foundation::Rect target, _In_ ABI::Windows::Foundation::Point point, _Out_ BOOLEAN* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_Contains);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckActivationAllowed());
    IFC(ContainsImpl(target, point, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::Equals(_In_ ABI::Windows::Foundation::Rect target, _In_ ABI::Windows::Foundation::Rect value, _Out_ BOOLEAN* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_Equals);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckActivationAllowed());
    IFC(EqualsImpl(target, value, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::Intersect(_In_ ABI::Windows::Foundation::Rect target, _In_ ABI::Windows::Foundation::Rect rect, _Out_ ABI::Windows::Foundation::Rect* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_Intersect);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckActivationAllowed());
    IFC(IntersectImpl(target, rect, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::UnionWithPoint(_In_ ABI::Windows::Foundation::Rect target, _In_ ABI::Windows::Foundation::Point point, _Out_ ABI::Windows::Foundation::Rect* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_UnionWithPoint);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckActivationAllowed());
    IFC(UnionWithPointImpl(target, point, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::UnionWithRect(_In_ ABI::Windows::Foundation::Rect target, _In_ ABI::Windows::Foundation::Rect rect, _Out_ ABI::Windows::Foundation::Rect* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_UnionWithRect);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckActivationAllowed());
    IFC(UnionWithRectImpl(target, rect, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RectHelperFactory::DipsRectToPhysicalRect(_In_ ABI::Windows::Foundation::Rect dipsRect, _Out_ ABI::Windows::Foundation::Rect* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::RectHelper_DipsRectToPhysicalRect);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckActivationAllowed());
    IFC(DipsRectToPhysicalRectImpl(dipsRect, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_RectHelper()
    {
        RRETURN(ctl::ActivationFactoryCreator<RectHelperFactory>::CreateActivationFactory());
    }
}
