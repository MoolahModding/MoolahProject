#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZOnTelegraphAttackComponent.generated.h"

class ASBZAICharacter;
class ASBZEquippable;
class ASBZWeapon;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZOnTelegraphAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZWeapon* OwnerWeapon;
    
public:
    USBZOnTelegraphAttackComponent();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUnequip(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable)
    void OnTelegraphAttackChanged(ASBZAICharacter* Character, bool bActivated);
    
};

