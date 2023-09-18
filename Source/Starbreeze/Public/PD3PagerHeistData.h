#pragma once
#include "CoreMinimal.h"
#include "PD3PagerHeistData.generated.h"

USTRUCT(BlueprintType)
struct FPD3PagerHeistData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxAnswerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TimedOutCountIncrease;
    
    STARBREEZE_API FPD3PagerHeistData();
};

