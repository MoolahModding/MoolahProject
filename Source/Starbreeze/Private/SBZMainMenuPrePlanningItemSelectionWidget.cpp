#include "SBZMainMenuPrePlanningItemSelectionWidget.h"

void USBZMainMenuPrePlanningItemSelectionWidget::UpdateAvailablePrePlanningAssetList() {
}

void USBZMainMenuPrePlanningItemSelectionWidget::SetPreplanningSelectionEnabled(bool bEnabled) {
}






void USBZMainMenuPrePlanningItemSelectionWidget::NativePreplanningAssetRemovedByPlayer(const FUniqueNetIdRepl& PlayerID) {
}

void USBZMainMenuPrePlanningItemSelectionWidget::NativePreplanningAssetAddedByPlayer(const FUniqueNetIdRepl& PlayerID, const FString& AssetSku) {
}

void USBZMainMenuPrePlanningItemSelectionWidget::NativeOnPrePlanningItemButtonSelected(USBZMenuButton* InButton) {
}

USBZMainMenuPrePlanningItemSelectionWidget::USBZMainMenuPrePlanningItemSelectionWidget() {
    this->Panel_ButtonList = NULL;
    this->PreplanningItemButtonClass = NULL;
    this->CachedPlayerInventory = NULL;
}

