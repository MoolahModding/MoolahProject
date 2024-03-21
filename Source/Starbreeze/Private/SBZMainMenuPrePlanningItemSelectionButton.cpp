#include "SBZMainMenuPrePlanningItemSelectionButton.h"



void USBZMainMenuPrePlanningItemSelectionButton::InitializePrePlanningItem(const USBZPreplanningAssetData* InPreplanningItem, int32 InStackCount) {
}

USBZPreplanningAssetData* USBZMainMenuPrePlanningItemSelectionButton::GetPreplanningItem() const {
    return NULL;
}

USBZMainMenuPrePlanningItemSelectionButton::USBZMainMenuPrePlanningItemSelectionButton() {
    this->PreplanningItem = NULL;
    this->StackCount = 0;
}

