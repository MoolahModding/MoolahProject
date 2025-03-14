#pragma once
#include "CoreMinimal.h"
#include "ESBZVolumeType.generated.h"

UENUM(BlueprintType)
enum class ESBZVolumeType : uint8 {
    Master,
    Music,
    VO,
    OperatorVO,
    SFX,
    HUD,
    VOIP,
    VOIPMic,
    Cinematic,
};

