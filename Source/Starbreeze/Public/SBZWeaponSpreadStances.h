#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponSpreadStanceMultipliers.h"
#include "SBZWeaponSpreadStances.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponSpreadStances {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceMultipliers Stand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceMultipliers StandMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceMultipliers Crouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceMultipliers CrouchMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceMultipliers Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSpreadStanceMultipliers TargetMove;
    
    STARBREEZE_API FSBZWeaponSpreadStances();
};

