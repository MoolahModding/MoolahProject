#pragma once
#include "CoreMinimal.h"
#include "ESBZVoiceGruntType.generated.h"

UENUM(BlueprintType)
enum class ESBZVoiceGruntType : uint8 {
    Light,
    Heavy,
    HurtLight,
    HurtHeavy,
    Upwards,
    Downwards,
};

