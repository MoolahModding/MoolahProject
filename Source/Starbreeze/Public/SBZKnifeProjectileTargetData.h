#pragma once
#include "CoreMinimal.h"
#include "SBZProjectileTargetData.h"
#include "SBZKnifeProjectileTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZKnifeProjectileTargetData : public FSBZProjectileTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZKnifeProjectileTargetData();
};

