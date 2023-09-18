#pragma once
#include "CoreMinimal.h"
#include "SBZPivotSwitchHandler.generated.h"

USTRUCT(BlueprintType)
struct FSBZPivotSwitchHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimOffsetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurValue;
    
    STARBREEZE_API FSBZPivotSwitchHandler();
};

