#pragma once
#include "CoreMinimal.h"
#include "ESBZSenseConfig.generated.h"

UENUM(BlueprintType)
enum class ESBZSenseConfig : uint8 {
    Default,
    Combat,
    Distracted,
};

