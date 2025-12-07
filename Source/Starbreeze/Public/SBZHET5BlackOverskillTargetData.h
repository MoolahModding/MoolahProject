#pragma once
#include "CoreMinimal.h"
#include "SBZChainedDamageProjectileTargetData.h"
#include "SBZHET5BlackOverskillTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZHET5BlackOverskillTargetData : public FSBZChainedDamageProjectileTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZHET5BlackOverskillTargetData();
};

