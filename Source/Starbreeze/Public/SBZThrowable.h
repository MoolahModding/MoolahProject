#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "ESBZThrowableState.h"
#include "SBZEquippable.h"
#include "SBZProjectileInterface.h"
#include "SBZThrowable.generated.h"

class AActor;
class ASBZCharacter;
class ASBZPlayerState;
class UAkAudioEvent;
class UAkRtpc;
class UMeshComponent;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class USBZMarkerDataAsset;
class USBZThrowableData;

UCLASS(Abstract, Blueprintable)
class ASBZThrowable : public ASBZEquippable, public ISBZProjectileInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* MarkerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MarkerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZThrowableData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ThrowableState, meta=(AllowPrivateAccess=true))
    ESBZThrowableState ThrowableState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReduceBouncinessPerBounce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BouncinessReductionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTimesToReduceBounciness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBounces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePhysicsOnStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OverrideAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OverrideAudioRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioImpactForceModifierValue;
    
public:
    ASBZThrowable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server)
    void Server_SetThrowableState(ESBZThrowableState NewThrowableState);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnThrowStillAttached();
    
public:
    UFUNCTION()
    void OnThrownActorHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void OnThrownActorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnThrow();
    
    UFUNCTION()
    void OnRep_ThrowableState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReady();
    
    UFUNCTION()
    void OnProjectileStopped(const FHitResult& InHitResult);
    
    UFUNCTION()
    void OnProjectileBounce(const FHitResult& InHitResult, const FVector& ImpactVelocity);
    
    UFUNCTION()
    void OnInstigatorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDetachForThrow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttachForThrow();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetThrowVelocity(const FVector_NetQuantizeNormal& ThrowDirection);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetThrowState(ESBZThrowableState NewThrowState);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DestroyBreakable(const FHitResult& InBreakableHitResult);
    
    UFUNCTION()
    void CreateImpactPoint(const FHitResult& Hit, float Velocity);
    
    
    // Fix for true pure virtual functions not being implemented
};

