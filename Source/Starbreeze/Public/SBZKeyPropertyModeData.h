#pragma once
#include "CoreMinimal.h"
#include "SBZKeyPropertyModeData.generated.h"

USTRUCT(BlueprintType)
struct FSBZKeyPropertyModeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadZoneArray;
    
    STARBREEZE_API FSBZKeyPropertyModeData();
};

