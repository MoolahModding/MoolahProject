#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZSensorMarkingData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSensorMarkingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkedTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle MarkingTimerHandle;
    
    STARBREEZE_API FSBZSensorMarkingData();
};

