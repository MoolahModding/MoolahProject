#pragma once
#include "CoreMinimal.h"
#include "SBZDrillMatData.generated.h"

USTRUCT(BlueprintType)
struct FSBZDrillMatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressPerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatPerSec;
    
    STARBREEZE_API FSBZDrillMatData();
};

