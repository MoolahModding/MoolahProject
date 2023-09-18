#include "PD3ReviveInteractionWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3ReviveInteractionWidget::UPD3ReviveInteractionWidget() {
    this->Progress = 0.00f;
    this->Visibility = ESlateVisibility::Hidden;
}

void UPD3ReviveInteractionWidget::OnReviveInteractionEnded(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}


