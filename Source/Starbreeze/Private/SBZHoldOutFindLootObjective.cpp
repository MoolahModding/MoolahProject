#include "SBZHoldOutFindLootObjective.h"

USBZHoldOutFindLootObjective::USBZHoldOutFindLootObjective() {
    this->BagTriggerVolume = NULL;
    this->RequiredBagType = NULL;
    this->NumLootToCollect = 1;
    this->NumActiveLootContainer = 1;
}

void USBZHoldOutFindLootObjective::OnBagEntered(ASBZBagTriggerVolume* Volume, ASBZBagItem* BagItem, FSBZBagHandle BagHandle) {
}


