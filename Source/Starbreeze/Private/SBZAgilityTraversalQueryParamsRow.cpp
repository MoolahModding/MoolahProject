#include "SBZAgilityTraversalQueryParamsRow.h"

FSBZAgilityTraversalQueryParamsRow::FSBZAgilityTraversalQueryParamsRow() {
    this->AgilityType = ESBZAgilityTraversalType::VaultLowSlow;
    this->MinFallHeight = 0.00f;
    this->bEntrySpeedOverridesJumpCurve = false;
    this->bEntrySpeedOverridesTraversalCurve = false;
    this->bEntrySpeedOverridesLandCurve = false;
    this->EyeHeight = 0.00f;
}

