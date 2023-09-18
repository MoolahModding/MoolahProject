#pragma once
#include "CoreMinimal.h"
#include "SBZCameraViewRestriction.h"
#include "SBZSpectateCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FSBZSpectateCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCameraViewRestriction CameraViewRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSpringArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSpringArmLengthInterpSpeed;
    
    STARBREEZE_API FSBZSpectateCameraSettings();
};

