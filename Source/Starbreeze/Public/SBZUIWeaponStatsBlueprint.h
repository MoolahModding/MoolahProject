#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZUIWeaponStatsBlueprint.generated.h"

class USBZRangedWeaponData;

UCLASS(Blueprintable)
class USBZUIWeaponStatsBlueprint : public UObject {
    GENERATED_BODY()
public:
    USBZUIWeaponStatsBlueprint();
    UFUNCTION(BlueprintImplementableEvent)
    void GetStabilityValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetRecoilValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetHandlingValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetFireRateValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetDamageValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetAccuracyValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const;
    
};

