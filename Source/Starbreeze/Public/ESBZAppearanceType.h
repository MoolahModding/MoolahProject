#pragma once
#include "CoreMinimal.h"
#include "ESBZAppearanceType.generated.h"

UENUM(BlueprintType)
enum class ESBZAppearanceType : uint8 {
    NoType,
    Character,
    Mask,
    Suit,
    Gloves,
    Watches,
};

