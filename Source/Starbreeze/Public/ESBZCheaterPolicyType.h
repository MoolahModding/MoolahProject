#pragma once
#include "CoreMinimal.h"
#include "ESBZCheaterPolicyType.generated.h"

UENUM(BlueprintType)
enum class ESBZCheaterPolicyType : uint8 {
    NoAction,
    Ban,
    DefaultItems,
};

