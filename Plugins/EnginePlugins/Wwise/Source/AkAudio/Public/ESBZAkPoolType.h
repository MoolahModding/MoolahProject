#pragma once
#include "CoreMinimal.h"
#include "ESBZAkPoolType.generated.h"

UENUM(BlueprintType)
enum class ESBZAkPoolType : uint8 {
    NoPool,
    MainCharacterFootSteps,
    OtherFootSteps,
    WeaponImpact,
    EnvironmentImpact,
    Interaction,
    Max,
};

