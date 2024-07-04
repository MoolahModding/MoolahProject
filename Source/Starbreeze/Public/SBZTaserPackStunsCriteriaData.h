#pragma once
#include "CoreMinimal.h"
#include "SBZStatisticCriteriaData.h"
#include "SBZTaserPackStunsCriteriaData.generated.h"

UCLASS(Blueprintable)
class USBZTaserPackStunsCriteriaData : public USBZStatisticCriteriaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfStuns;
    
    USBZTaserPackStunsCriteriaData();

};

