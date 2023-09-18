#pragma once
#include "CoreMinimal.h"
#include "ESBZMaskCosmeticsSlot.generated.h"

UENUM(BlueprintType)
enum class ESBZMaskCosmeticsSlot : uint8 {
    MouldSlot,
    MaterialSlot,
    PatternSlot,
    VFXSlot,
};

