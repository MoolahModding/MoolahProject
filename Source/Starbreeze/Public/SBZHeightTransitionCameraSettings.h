#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "SBZHeightTransitionCameraSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSBZHeightTransitionCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption BlendOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlendCustomCurve;
    
    STARBREEZE_API FSBZHeightTransitionCameraSettings();
};

