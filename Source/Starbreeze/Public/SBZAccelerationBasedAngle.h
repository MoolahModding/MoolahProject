#pragma once
#include "CoreMinimal.h"
#include "SBZAccelerationBasedAngle.generated.h"

USTRUCT(BlueprintType)
struct FSBZAccelerationBasedAngle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Deceleration;
    
    STARBREEZE_API FSBZAccelerationBasedAngle();
};

