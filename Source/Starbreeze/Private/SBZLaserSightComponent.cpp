#include "SBZLaserSightComponent.h"
#include "NiagaraComponent.h"

FRotator USBZLaserSightComponent::ModifyWeaponRotation(const FRotator& InOutRotation) {
    return FRotator{};
}

USBZLaserSightComponent::USBZLaserSightComponent() {
    this->LaserEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->FocusTime = 1.00f;
    this->MaxHorizontalOffset = 200.00f;
    this->MaxVerticalOffset = 200.00f;
    this->HorizontalFrequency = 10.00f;
    this->VerticalFrequency = 10.00f;
    this->PhaseShift = 1.00f;
}

