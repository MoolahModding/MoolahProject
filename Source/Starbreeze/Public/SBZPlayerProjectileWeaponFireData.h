#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerWeaponFireData.h"
#include "SBZPlayerProjectileWeaponFireData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerProjectileWeaponFireData : public USBZPlayerWeaponFireData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnOffsetFromCamera;
    
    USBZPlayerProjectileWeaponFireData();
};

