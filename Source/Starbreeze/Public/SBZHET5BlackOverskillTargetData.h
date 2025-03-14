#pragma once
#include "CoreMinimal.h"
#include "SBZProjectileTargetData.h"
#include "SBZHET5BlackOverskillTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZHET5BlackOverskillTargetData : public FSBZProjectileTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZHET5BlackOverskillTargetData();
};

