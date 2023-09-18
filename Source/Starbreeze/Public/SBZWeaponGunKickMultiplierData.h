#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponGunKickMultiplierData.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponGunKickMultiplierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Increment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    STARBREEZE_API FSBZWeaponGunKickMultiplierData();
};

