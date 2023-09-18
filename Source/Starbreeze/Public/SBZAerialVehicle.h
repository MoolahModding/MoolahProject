#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Curves/CurveFloat.h"
#include "ESBZAerialVehicleDoor.h"
#include "SBZAerialVehicleOnBeginStopDelegate.h"
#include "SBZAerialVehicleOnDoorStateChangedDelegate.h"
#include "SBZAerialVehicleOnPathEndReachedDelegate.h"
#include "SBZAerialVehicleOnSplineEndReachedDelegate.h"
#include "SBZAerialVehicleOnSplineEnteredDelegate.h"
#include "SBZAerialVehicleOnSplineLeftDelegate.h"
#include "SBZAerialVehicleOnStateEnteredDelegate.h"
#include "SBZAerialVehicleOnStateExitDelegate.h"
#include "SBZAerialVehicleOnStoppedDelegate.h"
#include "SBZVehicleInterface.h"
#include "SBZVehicleReplicatedMovementBase.h"
#include "SBZAerialVehicle.generated.h"

class ASBZSpline;
class USBZAerialVehicleAudioComponent;
class USBZAerialVehicleSplineFollowingComponent;
class USBZAerialVehicleStateMachine;
class USBZVehicleSpawnComponent;
class USBZVehicleSplineFollowingComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAerialVehicle : public APawn, public ISBZVehicleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAerialVehicleOnBeginStop OnBeginStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAerialVehicleOnStopped OnStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAerialVehicleOnSplineEntered OnSplineEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAerialVehicleOnSplineLeft OnSplineLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAerialVehicleOnSplineEndReached OnSplineEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAerialVehicleOnPathEndReached OnPathEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAerialVehicleOnStateEntered OnStateEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAerialVehicleOnStateExit OnStateExited;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAerialVehicleOnDoorStateChanged OnDoorStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAerialVehicleAudioComponent* AerialVehicleAudioComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAerialVehicleSplineFollowingComponent* SplineFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAerialVehicleStateMachine* StateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve HoverStatePitchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve HoverStateYawCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve HoverStateRollCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DoorState, meta=(AllowPrivateAccess=true))
    uint8 DoorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepMove, meta=(AllowPrivateAccess=true))
    FSBZVehicleReplicatedMovementBase RepMove;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxRollAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHoverYawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHoverRollAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLandingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainRotorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TailRotorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootName;
    
public:
    ASBZAerialVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDoorState(uint8 NewState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDoorOpen(ESBZAerialVehicleDoor Door, bool bOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnDoorStateChanged(ESBZAerialVehicleDoor Door, bool bIsDoorOpen);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStoppedCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnSplineLeftCallback(ASBZSpline* Spline);
    
    UFUNCTION(BlueprintCallable)
    void OnSplineEnteredCallback(ASBZSpline* Spline, bool bPathEntered, bool bTeleportToPathStart);
    
    UFUNCTION(BlueprintCallable)
    void OnSplineEndReachedCallback(ASBZSpline* Spline);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepMove();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoorState(uint8 OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnPathEndReachedCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginStopCallback();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDoorState(uint8 NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZVehicleSplineFollowingComponent* GetVehicleSplineFollowingComponent() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    USBZVehicleSplineFollowingComponent* GetSplineFollowingComponent() const override PURE_VIRTUAL(GetSplineFollowingComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    USBZVehicleSpawnComponent* GetSpawnComponent() const override PURE_VIRTUAL(GetSpawnComponent, return NULL;);
    
};

