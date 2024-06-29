#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZDamageDistance.h"
#include "SBZWeaponFireData.h"
#include "SBZPlayerWeaponFireData.generated.h"

class USBZWeaponMuzzleData;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerWeaponFireData : public USBZWeaponFireData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDamageDistance> DamageDistanceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenBurstsSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReloadEndCycledEachRound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AmmoLoaded;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AmmoLeftInChamber;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AmmoPerFiredRound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AmmoInventoryMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AmmoInventory;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AmmoPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponMuzzleData* MuzzleData;
    
    USBZPlayerWeaponFireData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDamageOnEachDistance(float MinDistance, float MaxDistance, float DistanceStep, TArray<float>& OutDamageArray) const;
    
};

