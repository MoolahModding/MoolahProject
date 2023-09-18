#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponAimAssistMagnetismData.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponAimAssistMagnetismData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletDeviationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletMagnetismSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSpread;
    
    STARBREEZE_API FSBZWeaponAimAssistMagnetismData();
};

