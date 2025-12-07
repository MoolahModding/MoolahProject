#pragma once
#include "CoreMinimal.h"
#include "SBZChainedDamageProjectileTargetData.h"
#include "SBZSkillGrazeTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillGrazeTargetData : public FSBZChainedDamageProjectileTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZSkillGrazeTargetData();
};

