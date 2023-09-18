#pragma once
#include "CoreMinimal.h"
#include "ESBZDamageWeight.generated.h"

UENUM(BlueprintType)
enum class ESBZDamageWeight : uint8 {
    Flinch,
    Interrupt,
    Stun,
    Incapacitate,
    MAX,
};

