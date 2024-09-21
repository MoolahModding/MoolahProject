#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZPropDamageContext.h"
#include "SBZAIRefractorShield.generated.h"

class UActorComponent;
class UAkAudioEvent;
class UAnimationAsset;
class UNiagaraSystem;
class USBZPropDamageComponent;
class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable)
class ASBZAIRefractorShield : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPropDamageComponent* PropDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DestroyedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DestroyedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* DeployAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* RetractAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasDeployed, meta=(AllowPrivateAccess=true))
    bool bHasDeployed;
    
public:
    ASBZAIRefractorShield(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_HasDeployed();
    
    UFUNCTION(BlueprintCallable)
    void OnPropDamaged(UActorComponent* PoolComponent, float Health, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext);
    
};

