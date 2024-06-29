#include "SBZMainMenuPrePlanningItemSelectionWidget.h"

USBZMainMenuPrePlanningItemSelectionWidget::USBZMainMenuPrePlanningItemSelectionWidget() {
    this->StackValue = TEXT("Default__SBZMainMenuPrePlanningItemSelectionWidget");
    this->Panel_ButtonList = NULL;
    this->PreplanningItemButtonClass = NULL;
    this->CachedPlayerInventory = NULL;
}

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


