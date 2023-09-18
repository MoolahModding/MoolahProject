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

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetStabilityValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetRecoilValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetHandlingValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetFireRateValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDamageValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAccuracyValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const;
    
};

