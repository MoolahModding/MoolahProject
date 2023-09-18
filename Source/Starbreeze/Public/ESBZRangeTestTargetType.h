#pragma once
#include "CoreMinimal.h"
#include "ESBZRangeTestTargetType.generated.h"

UENUM(BlueprintType)
enum class ESBZRangeTestTargetType : uint8 {
    Enemy,
    Player,
    Cop,
    NonAlertedCop,
};

