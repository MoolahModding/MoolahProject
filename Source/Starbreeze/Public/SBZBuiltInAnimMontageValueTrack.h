#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "ESBZBuiltInAnimMontageTrackType.h"
#include "SBZBuiltInAnimMontageValueTrack.generated.h"

USTRUCT(BlueprintType)
struct FSBZBuiltInAnimMontageValueTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBuiltInAnimMontageTrackType TrackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    STARBREEZE_API FSBZBuiltInAnimMontageValueTrack();
};

