#include "SBZAbilityInputActionWidget.h"

void USBZAbilityInputActionWidget::OnPlayerStateDestroyed(AActor* DestroyedActor) {
}


USBZAbilityInputActionWidget::USBZAbilityInputActionWidget() {
    this->bCanActivate = false;
    this->Character = NULL;
    this->GameplayAbility = NULL;
}

