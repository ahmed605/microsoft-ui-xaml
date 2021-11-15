// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class SampleControlProperties
{
public:
    SampleControlProperties();

    void Placeholder(winrt::IInspectable const& value);
    winrt::IInspectable Placeholder();

    static winrt::DependencyProperty PlaceholderProperty() { return s_PlaceholderProperty; }

    static GlobalDependencyProperty s_PlaceholderProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnPlaceholderPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
