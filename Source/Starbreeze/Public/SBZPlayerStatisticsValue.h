#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStatisticsValue.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerStatisticsValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PreviousValue;
    
    FSBZPlayerStatisticsValue();
};

