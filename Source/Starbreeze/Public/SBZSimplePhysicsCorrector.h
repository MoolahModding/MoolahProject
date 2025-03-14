#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SBZSimplePhysicsState.h"
#include "SBZSimplePhysicsCorrector.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZSimplePhysicsCorrector : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector AngularVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSBZSimplePhysicsState LastState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Root;
    
public:
    USBZSimplePhysicsCorrector(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetVelocity(FVector Vel);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocity(const FVector& AngularVelocity);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SyncState(const FSBZSimplePhysicsState& State);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_InvalidateState();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ForceTeleport(const FSBZSimplePhysicsState& State);
    
};

