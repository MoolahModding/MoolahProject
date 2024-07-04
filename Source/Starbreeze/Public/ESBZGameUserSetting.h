#pragma once
#include "CoreMinimal.h"
#include "ESBZGameUserSetting.generated.h"

UENUM(BlueprintType)
enum class ESBZGameUserSetting : uint8 {
    GamepadHorizontalSensitivity,
    GamepadVerticalSensitivity,
    IsChatDisabled,
    IsCrossplayDisabled,
    MouseSensitivity,
    MouseSensitivityMultiplier,
    TargetingSensitivityMultiplier,
    UseForceFeedback,
    UseHoldForTabMenu,
    UseHoldToCrouch,
    UseHoldToRun,
    UseHoldToTarget,
    IsHoldToSlide,
    UseInvertedYAxis,
    UseMouseSmoothing,
    UseSwitchWeaponAutomatically,
    IsRememberSkipIntroSequence,
    HeadbobScale,
};

