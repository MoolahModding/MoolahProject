#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZEquippableCharm.generated.h"

class ASBZCharacter;
class ASBZEquippable;
class UMeshComponent;
class USBZOutlineComponent;

UCLASS(Abstract, Blueprintable)
class ASBZEquippableCharm : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZEquippable* OwningEquippable;
    
public:
    ASBZEquippableCharm();
    UFUNCTION()
    void UpdateMeshPropertiesFrom(const UMeshComponent* Reference, USBZOutlineComponent* OutlineComponent, bool bIsReset);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningEquippable(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningCharacter(const ASBZCharacter* Character);
    
    UFUNCTION()
    void ResetMeshProperties(const UMeshComponent* Reference, USBZOutlineComponent* OutlineComponent);
    
protected:
    UFUNCTION()
    void OnParentDestroyed(AActor* DestroyedParent);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnEquippableUsed(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEquippableUnequipped(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEquippableUndropped(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEquippableEquipped(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEquippableDropped(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintPure)
    FVector GetOwningCharacterVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float GetEquippableTimeLastUsed() const;
    
    UFUNCTION()
    void EquippableUsed(const ASBZEquippable* Equippable);
    
    UFUNCTION()
    void EquippableUnequipped(const ASBZEquippable* Equippable);
    
    UFUNCTION()
    void EquippableUndropped(const ASBZEquippable* Equippable);
    
    UFUNCTION()
    void EquippableEquipped(const ASBZEquippable* Equippable);
    
    UFUNCTION()
    void EquippableDropped(const ASBZEquippable* Equippable);
    
};

