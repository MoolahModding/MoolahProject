#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZWeaponGunKickBackData.h"
#include "SBZWeaponGunKickData.h"
#include "SBZWeaponViewKickBackData.h"
#include "SBZWeaponViewKickData.h"
#include "SBZRecoilData.generated.h"

UCLASS(Blueprintable, Const)
class USBZRecoilData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DisplacementListMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponViewKickData ViewKick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponViewKickBackData ViewKickBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponViewKickBackData ViewKickBackTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponGunKickData GunKickXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunKickBackAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponGunKickBackData GunKickBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponGunKickBackData GunKickBackTargeting;
    
    USBZRecoilData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGunKickVerticalTop(float& OutMin, float& OutMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGunKickVerticalBottom(float& OutMin, float& OutMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGunKickHorizontalRight(float& OutMin, float& OutMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGunKickHorizontalLeft(float& OutMin, float& OutMax) const;
    
};

