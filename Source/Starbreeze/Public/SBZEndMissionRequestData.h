#pragma once
#include "CoreMinimal.h"
#include "ESBZEndMissionResult.h"
#include "SBZEndMissionRequestData.generated.h"

USTRUCT(BlueprintType)
struct FSBZEndMissionRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZEndMissionResult MissionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OutroVariation;
    
    STARBREEZE_API FSBZEndMissionRequestData();
};

