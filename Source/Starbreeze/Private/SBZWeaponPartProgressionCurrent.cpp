#include "SBZWeaponPartProgressionCurrent.h"

FSBZWeaponPartProgressionCurrent::FSBZWeaponPartProgressionCurrent() {
    this->ProgressionLevel = 0;
    this->WeaponPart = NULL;
    this->WeaponPartApplyStatus = ESBZWeaponPartApplyStatus::NotAllowed;
    this->WeaponPartLockReason = ESBZWeaponPartLockReason::None;
    this->Price = 0;
    this->CurrencyCode = ESBZCurrencyCode::Cash;
    this->DiscountAmount = 0;
    this->DiscountPercentage = 0;
    this->DiscountedPrice = 0;
    this->CurrencyType = ESBZItemCurrencyType::NONE;
}

