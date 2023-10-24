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

#include "CSelectorAutomationPeer.g.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CListViewBaseAutomationPeer : public CSelectorAutomationPeer
{
protected:
    CListViewBaseAutomationPeer(_In_ CCoreServices *pCore, _In_ CValue &value)
        : CSelectorAutomationPeer(pCore, value)
    {
        SetIsCustomType();
    }

    ~CListViewBaseAutomationPeer() override = default;

public:
    DECLARE_CREATE_AP(CListViewBaseAutomationPeer);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::ListViewBaseAutomationPeer;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
};