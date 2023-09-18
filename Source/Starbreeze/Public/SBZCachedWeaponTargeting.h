#pragma once
#include "CoreMinimal.h"
#include "SBZCachedWeaponTargeting.generated.h"

class USBZWeaponSightData;

USTRUCT(BlueprintType)
struct FSBZCachedWeaponTargeting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZWeaponSightData* SightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetingTransitionTime;
    
    STARBREEZE_API FSBZCachedWeaponTargeting();
};

