#pragma once
#include "CoreMinimal.h"
#include "SBZStatisticCriteriaData.h"
#include "SBZSmashAndGrabStatisticCriteriaData.generated.h"

UCLASS(Blueprintable)
class USBZSmashAndGrabStatisticCriteriaData : public USBZStatisticCriteriaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionTime;
    
    USBZSmashAndGrabStatisticCriteriaData();

};

