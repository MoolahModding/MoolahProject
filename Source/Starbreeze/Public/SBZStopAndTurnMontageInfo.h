#pragma once
#include "CoreMinimal.h"
#include "SBZStopAndTurnMontageInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZStopAndTurnMontageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntrySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionAngleThreshold;
    
    STARBREEZE_API FSBZStopAndTurnMontageInfo();
};

