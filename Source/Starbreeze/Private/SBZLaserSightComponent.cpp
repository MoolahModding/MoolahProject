#include "SBZLaserSightComponent.h"
#include "NiagaraComponent.h"

USBZLaserSightComponent::USBZLaserSightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LaserEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->DifficultyFocusTimeArray[0] = 1.00f;
    this->DifficultyFocusTimeArray[1] = 1.00f;
    this->DifficultyFocusTimeArray[2] = 1.00f;
    this->DifficultyFocusTimeArray[3] = 1.00f;
    this->MaxHorizontalOffset = 200.00f;
    this->MaxVerticalOffset = 200.00f;
    this->HorizontalFrequency = 10.00f;
    this->VerticalFrequency = 10.00f;
    this->PhaseShift = 1.00f;
}

FRotator USBZLaserSightComponent::ModifyWeaponRotation(const FRotator& InOutRotation) {
    return FRotator{};
}


