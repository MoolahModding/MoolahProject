#pragma once
#include "CoreMinimal.h"
#include "ESBZCharacterSlotStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZCharacterSlotStatus : uint8 {
    Available,
    Taken,
};

