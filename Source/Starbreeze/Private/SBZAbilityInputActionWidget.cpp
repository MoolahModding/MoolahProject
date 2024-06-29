#include "SBZAbilityInputActionWidget.h"

USBZAbilityInputActionWidget::USBZAbilityInputActionWidget() {
    this->bCanActivate = false;
    this->Character = NULL;
    this->GameplayAbility = NULL;
}

void USBZAbilityInputActionWidget::OnPlayerStateDestroyed(AActor* DestroyedActor) {
}



