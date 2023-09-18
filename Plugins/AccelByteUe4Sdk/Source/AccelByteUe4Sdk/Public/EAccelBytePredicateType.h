#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePredicateType.generated.h"

UENUM(BlueprintType)
enum class EAccelBytePredicateType : uint8 {
    EntitlementPredicate,
    SeasonPassPredicate,
    SeasonTierPredicate,
};

