#include "PD3ReviveInteractionWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3ReviveInteractionWidget::UPD3ReviveInteractionWidget() {
    this->Visibility = ESlateVisibility::Hidden;
    this->Progress = 0.00f;
}


void UPD3ReviveInteractionWidget::OnReviveInteractionEndedInternal(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}



