#include "SBZMainMenuWidget.h"

void USBZMainMenuWidget::ShowTutorialPopup() {
}

void USBZMainMenuWidget::ShowTelemetryPopup() {
}


void USBZMainMenuWidget::ShowGameSensePopup() {
}

void USBZMainMenuWidget::ShowCrossplayPopup() {
}

void USBZMainMenuWidget::SetVendorTypeToOpen(ESBZBlackMarketVendorType VendorType) {
}

void USBZMainMenuWidget::RequestRemoveBackgroundBlur() {
}


void USBZMainMenuWidget::OnTutorialPopUpClosed(FName ClosingActionName) {
}

void USBZMainMenuWidget::OnTelemetryPopUpClosed(FName ClosingActionName) {
}

void USBZMainMenuWidget::OnGameSensePopUpClosed(FName ClosingActionName) {
}

void USBZMainMenuWidget::OnCrossplayPopUpClosed(FName ClosingActionName) {
}

ESBZBlackMarketVendorType USBZMainMenuWidget::GetVendorTypeToOpen(bool bResetValue) {
    return ESBZBlackMarketVendorType::Featured;
}

bool USBZMainMenuWidget::DisplayWeaponProgressionScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
    return false;
}

bool USBZMainMenuWidget::DisplayWeaponModiferScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex, const USBZWeaponPartSlot* InWeaponPartSlot) {
    return false;
}

bool USBZMainMenuWidget::DisplayWeaponInventoryScreen(int32 LoadoutIndex, ESBZEquippableLoadoutSlot InEquippableSlot) {
    return false;
}

bool USBZMainMenuWidget::DisplaySuitCustomizationScreen(int32 InSuitSlotIndex) {
    return false;
}

bool USBZMainMenuWidget::DisplaySuitCosmeticCustomizationScreen(int32 InSuitSlotIndex, const USBZSuitPartConfig* InSuitPartConfig, const USBZCosmeticsPartSlot* InCosmeticPartSlot) {
    return false;
}

bool USBZMainMenuWidget::DisplaySkillsSelection(int32 InLoadoutIndex) {
    return false;
}

bool USBZMainMenuWidget::DisplayMaskGenericSlotScreen(const USBZCosmeticsPartSlot* InCosmeticPartSlot, bool HasDefaultBool, FText DefaultDisplayName) {
    return false;
}

bool USBZMainMenuWidget::DisplayMaskCustomizationScreen(int32 InMaskSlotIndex) {
    return false;
}

bool USBZMainMenuWidget::DisplayItemInventoryScreen(int32 InLoadoutIndex, ESBZItemLoadoutSlot InItemSlotType) {
    return false;
}

void USBZMainMenuWidget::DisplayHeistInpectScreen(UPD3HeistDataAsset* InHeistData) {
}

void USBZMainMenuWidget::DisplayFullscreenVideoScreen(const FFilePath& FilePath) {
}

void USBZMainMenuWidget::DisplayCosmeticScreen(ESBZMainMenuCosmeticType InType, ESBZEquippableLoadoutSlot InEquippableSlot, int32 InIndex) {
}

bool USBZMainMenuWidget::DisplayBlackmarketInspectScreen(USBZInventoryBaseData* InspectData) {
    return false;
}

bool USBZMainMenuWidget::CustomizeWeaponInSlotTemp(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
    return false;
}

bool USBZMainMenuWidget::CustomizeWeaponInSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
    return false;
}

void USBZMainMenuWidget::CustomizeLoadout(int32 InLoadoutIndex) {
}

bool USBZMainMenuWidget::CanInspectInventoryItem(USBZInventoryBaseData* InspectData) {
    return false;
}


USBZMainMenuWidget::USBZMainMenuWidget() {
    this->Widget_LoadoutCustomization = NULL;
    this->Widget_WeaponCustomization = NULL;
    this->Widget_WeaponCustomizationTemp = NULL;
    this->Widget_WeaponInventory = NULL;
    this->Widget_ItemInventory = NULL;
    this->Widget_SkillsSelection = NULL;
    this->Widget_WeaponProgression = NULL;
    this->Widget_MaskCustomization = NULL;
    this->Widget_WeaponModifiers = NULL;
    this->Widget_SuitCustomization = NULL;
    this->Widget_SuitCosmeticCustomization = NULL;
    this->Widget_BlackMarketInspect = NULL;
    this->Widget_Cosmetic = NULL;
    this->Widget_HeistInspect = NULL;
    this->Widget_FullscreenVideo = NULL;
    this->Widget_MainMenuNavbar = NULL;
    this->CosmeticItemButtonClass = NULL;
    this->CrossplayPopupWidgetClass = NULL;
    this->TutorialPopupWidgetClass = NULL;
    this->PopUpBody = NULL;
    this->VendorTypeToOpen = ESBZBlackMarketVendorType::None;
}

