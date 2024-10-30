#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableToolBase.h"
#include "SBZTripper.generated.h"

class AActor;
class UBoxComponent;
class UNiagaraComponent;

UCLASS(Blueprintable)
class ASBZTripper : public ASBZPlaceableToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* LaserEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentTarget, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
public:
    ASBZTripper(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentTarget();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCurrentTarget(AActor* InHitActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLaserUntripped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLaserTripped();
    
};

