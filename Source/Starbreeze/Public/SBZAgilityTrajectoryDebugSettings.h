#pragma once
#include "CoreMinimal.h"
#include "SBZAgilityTrajectoryDebugSettings.generated.h"

USTRUCT(BlueprintType)
struct FSBZAgilityTrajectoryDebugSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawTrajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 DrawStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawOnlyCurrentStep;
    
    STARBREEZE_API FSBZAgilityTrajectoryDebugSettings();
};

