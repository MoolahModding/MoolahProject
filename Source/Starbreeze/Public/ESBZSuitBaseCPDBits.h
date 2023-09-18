#pragma once
#include "CoreMinimal.h"
#include "ESBZSuitBaseCPDBits.generated.h"

UENUM(BlueprintType)
enum class ESBZSuitBaseCPDBits : uint8 {
    NONE,
    BIT0,
    BIT1,
    BIT2 = 0x4,
    BIT3 = 0x8,
    BIT4 = 0x10,
    BIT5 = 0x20,
    BIT6 = 0x40,
    BIT7 = 0x80,
};

