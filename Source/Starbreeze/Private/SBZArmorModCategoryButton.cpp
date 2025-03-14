#include "SBZArmorModCategoryButton.h"

USBZArmorModCategoryButton::USBZArmorModCategoryButton() {
    this->ArmorChunkIndex = -1;
    this->EquippedArmorChunkType = ESBZArmorChunkType::Normal;
}

void USBZArmorModCategoryButton::SetSelectedCallback(FOnArmorCategoryButtonSelected SelectedCallback) {
}


void USBZArmorModCategoryButton::InitializeModCategoryData(int32 InArmorChunkIndex, ESBZArmorChunkType InEquippedType) {
}


