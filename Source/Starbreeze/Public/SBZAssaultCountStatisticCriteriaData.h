#pragma once
#include "CoreMinimal.h"
#include "SBZStatisticCriteriaData.h"
#include "SBZAssaultCountStatisticCriteriaData.generated.h"

UCLASS(Blueprintable)
class USBZAssaultCountStatisticCriteriaData : public USBZStatisticCriteriaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfAssaultsCompleted;
    
    USBZAssaultCountStatisticCriteriaData();
};

