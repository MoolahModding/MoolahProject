#pragma once
#include "CoreMinimal.h"
#include "ESBZMeleeImpactType.generated.h"

UENUM(BlueprintType)
enum class ESBZMeleeImpactType : uint8 {
    Blunt,
    Slash,
    Pierce,
};

