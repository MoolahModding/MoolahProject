#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZLastAttackerData.generated.h"

USTRUCT(BlueprintType)
struct FSBZLastAttackerData : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZLastAttackerData();
};

