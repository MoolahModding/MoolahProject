#include "PD3OverkillWeaponRequestWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3OverkillWeaponRequestWidget::UPD3OverkillWeaponRequestWidget() {
    this->Visibility = ESlateVisibility::Visible;
    this->Widget_AbilityAction = NULL;
    this->OverkillProgressionScale = 0.00f;
    this->bIsOverskillEnabled = true;
    this->bIsOverskillLoadoutTicking = false;
    this->bIsReady = false;
    this->OverkillData = NULL;
}









