#pragma once
#include "CoreMinimal.h"
#include "SBZArmedPawn.h"
#include "SBZAIDrone.generated.h"

class UAkAudioEvent;
class UFloatingPawnMovement;
class UNiagaraSystem;
class USBZAIDroneAttributeSet;
class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable)
class ASBZAIDrone : public ASBZArmedPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIDroneAttributeSet* AttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DestroyedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DestroyedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFloatingPawnMovement* DroneMovementComponent;
    
public:
    ASBZAIDrone(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnKill();


    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override
    {
        return AbilitySystemComponent;
    }
};

