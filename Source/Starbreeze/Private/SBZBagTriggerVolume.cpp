#include "SBZBagTriggerVolume.h"

void ASBZBagTriggerVolume::SetVolumeEnabled(bool bEnabled) {
}

bool ASBZBagTriggerVolume::ManuallySecureBag(ASBZBagItem* BagItem, bool bFilterFirst) {
    return false;
}

int32 ASBZBagTriggerVolume::GetCount() {
    return 0;
}

bool ASBZBagTriggerVolume::FilterBag(ASBZBagItem* BagItem, FSBZBagHandle BagHandle) {
    return false;
}

bool ASBZBagTriggerVolume::CheckCustomBagFilter_Implementation(ASBZBagItem* BagItem, FSBZBagHandle BagHandle) {
    return false;
}

ASBZBagTriggerVolume::ASBZBagTriggerVolume() {
    this->bShouldStartEnabled = true;
    this->TriggerMode = ESBZBagTriggerMode::SecureAndDestroy;
    this->bDisableOnComplete = false;
    this->bCountOverlappedForTarget = true;
    this->bCountSecuredForTarget = true;
    this->Target = -1;
    this->LocallySecured = 0;
    this->BagTeleportPoint = NULL;
}

