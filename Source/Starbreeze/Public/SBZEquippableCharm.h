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
    ASBZEquippableCharm(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMeshPropertiesFrom(const UMeshComponent* Reference, USBZOutlineComponent* OutlineComponent, bool bIsReset);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningEquippable(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningCharacter(const ASBZCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void ResetMeshProperties(const UMeshComponent* Reference, USBZOutlineComponent* OutlineComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnParentDestroyed(AActor* DestroyedParent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEquippableUsed(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEquippableUnequipped(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEquippableUndropped(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEquippableEquipped(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEquippableDropped(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOwningCharacterVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEquippableTimeLastUsed() const;
    
    UFUNCTION(BlueprintCallable)
    void EquippableUsed(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable)
    void EquippableUnequipped(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable)
    void EquippableUndropped(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable)
    void EquippableEquipped(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable)
    void EquippableDropped(const ASBZEquippable* Equippable);
    
};

