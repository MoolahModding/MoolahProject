#pragma once
#include "CoreMinimal.h"
#include "SBZProjectileTargetData.h"
#include "SBZChainedDamageProjectileTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZChainedDamageProjectileTargetData : public FSBZProjectileTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZChainedDamageProjectileTargetData();
};

