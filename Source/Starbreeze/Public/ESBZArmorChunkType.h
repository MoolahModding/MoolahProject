#pragma once
#include "CoreMinimal.h"
#include "ESBZArmorChunkType.generated.h"

UENUM(BlueprintType)
enum class ESBZArmorChunkType : uint8 {
    Normal,
    Adaptive,
    Shield,
    MAX,
};

