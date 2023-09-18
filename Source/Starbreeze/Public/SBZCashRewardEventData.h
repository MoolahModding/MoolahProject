#pragma once
#include "CoreMinimal.h"
#include "ESBZMetaEventType.h"
#include "SBZCashRewardEventData.generated.h"

USTRUCT(BlueprintType)
struct FSBZCashRewardEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DifferencePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CashDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZMetaEventType EventType;
    
    STARBREEZE_API FSBZCashRewardEventData();
};

