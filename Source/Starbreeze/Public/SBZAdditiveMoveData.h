#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SBZAdditiveMoveData.generated.h"

USTRUCT(BlueprintType)
struct FSBZAdditiveMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AdditiveMoveAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AdditiveCameraAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AdditiveMovePlayRate;
    
    STARBREEZE_API FSBZAdditiveMoveData();
};

