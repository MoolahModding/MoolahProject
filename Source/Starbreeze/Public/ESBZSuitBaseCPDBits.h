#pragma once
#include "CoreMinimal.h"
#include "ESBZSuitBaseCPDBits.generated.h"

UENUM(BlueprintType)
enum class ESBZSuitBaseCPDBits : uint8 {
    NONE,
    BIT0,
    BIT1,
    BIT2 = 4,
    BIT3 = 8,
    BIT4 = 16,
    BIT5 = 32,
    BIT6 = 64,
    BIT7 = 128,
};

