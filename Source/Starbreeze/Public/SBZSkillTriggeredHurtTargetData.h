#pragma once
#include "CoreMinimal.h"
#include "SBZMeleeTargetData.h"
#include "SBZSkillTriggeredHurtTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillTriggeredHurtTargetData : public FSBZMeleeTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZSkillTriggeredHurtTargetData();
};

