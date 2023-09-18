#pragma once
#include "CoreMinimal.h"
#include "EPD3HeistState.h"
#include "SBZGameplayAbility.h"
#include "SBZAIHitByVehicleAbility.generated.h"

UCLASS(Blueprintable)
class USBZAIHitByVehicleAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPD3HeistState MinHeistState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompatibleStances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadlyVehicleSpeedHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDeadlyVehicleImpactWidth;
    
public:
    USBZAIHitByVehicleAbility();

};

