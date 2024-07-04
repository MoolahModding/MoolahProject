#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZAIStopAndTurnAbility.generated.h"

UCLASS(Blueprintable)
class USBZAIStopAndTurnAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleThresholdRecomputePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceThresholdRecomputePath;
    
public:
    USBZAIStopAndTurnAbility();

};

