#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "SBZVolumeDamageInterface.generated.h"

class AActor;
class UGameplayEffect;
class UObject;
class USBZDamageType;
class USBZVolumeDamageEffect;

UINTERFACE(Blueprintable)
class USBZVolumeDamageInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZVolumeDamageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool IsVolumeDamageReady() const;
    
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<USBZDamageType> GetVolumeDamageType() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetVolumeDamageTickSeconds() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetVolumeDamagePerSecond() const;
    
    UFUNCTION(BlueprintNativeEvent)
    AActor* GetVolumeDamageOwner(UObject* ThisObject) const;
    
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<USBZVolumeDamageEffect> GetVolumeDamageEffectClass() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetVolumeDamageArmorPenetration() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FGameplayTagContainer GetVolumeDamageAddedTagContainer() const;
    
    UFUNCTION(BlueprintNativeEvent)
    TMap<FName, float> GetTacticianDiscombobulateVolumeDamageEffectValueMap() const;
    
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<UGameplayEffect> GetTacticianDiscombobulateVolumeDamageEffectClass() const;
    
};

