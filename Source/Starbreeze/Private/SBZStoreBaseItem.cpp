#include "SBZStoreBaseItem.h"

FSBZStoreBaseItem::FSBZStoreBaseItem() {
    this->Price = 0;
    this->CurrencyCode = ESBZCurrencyCode::Cash;
    this->Platform = ESBZStoreItemPlatform::All;
    this->AvailableAtInfamyLevel = 0;
    this->AvailableToBuy = false;
    this->ItemLockReason = ESBZItemLockReason::NotLocked;
    this->MaxCountPerUser = 0;
    this->PriceProgression = 0;
    this->DiscountPercentage = 0;
    this->DiscountAmount = 0;
    this->DiscountedPrice = 0;
    this->CurrencyType = ESBZItemCurrencyType::NONE;
    this->VendorData = NULL;
    this->ItemRarity = ESBZItemRarity::NoRarity;
    this->bIsPremiumItem = false;
    this->bIsInexhaustibleItem = false;
    this->ItemCategory = ESBZItemCategory::PrimaryWeapon;
    this->bIsMaskOfTheWeek = false;
    this->bReportsTelemetry = false;
}

