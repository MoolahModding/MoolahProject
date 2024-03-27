#include "SBZSettingData.h"

FSBZSettingData::FSBZSettingData() {
    this->bHasPlaystationSpecificSettingNameLocalized = false;
    this->bHasXBoxSpecificSettingNameLocalized = false;
    this->ControlType = ESBZControlType::ActionClick;
    this->bApplyChangeImmediately = false;
    this->bAskChangeConfirmation = false;
    this->bCanResetToDefault = false;
    this->bShowOnlyOnWindowsPlatform = false;
    this->bHideInShippingBuild = false;
    this->bHideInAnyBuild = false;
    this->ButtonVisibilityPrevious = false;
    this->ButtonVisibilityCurrent = false;
    this->BoolValue = false;
    this->LastBoolValue = false;
    this->Int64Value = 0;
    this->LastInt64Value = 0;
    this->FloatMinValue = 0.00f;
    this->FloatMaxValue = 0.00f;
    this->FloatIncrementValue = 0.00f;
    this->FloatValue = 0.00f;
    this->LastFloatValue = 0.00f;
    this->bIsDirty = false;
    this->bHasDefaultValue = false;
    this->bActive = false;
}

