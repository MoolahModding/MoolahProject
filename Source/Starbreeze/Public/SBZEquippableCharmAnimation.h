#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SBZEquippableCharmAnimation.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class USBZEquippableCharmAnimation : public UAnimInstance {
    GENERATED_BODY()
public:
    USBZEquippableCharmAnimation();

};

