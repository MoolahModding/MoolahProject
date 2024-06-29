#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZOnTelegraphAttackComponent.generated.h"

class AActor;
class ASBZEquippable;
class ASBZWeapon;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZOnTelegraphAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZWeapon* OwnerWeapon;
    
public:
    USBZOnTelegraphAttackComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnUnequip(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable)
    void OnTelegraphAttackChanged(AActor* InActor, bool bActivated);
    
};

