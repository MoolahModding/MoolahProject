#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WheeledVehicle.h"
#include "ESBZVehicleDoorState.h"
#include "ESBZVehicleDoorType.h"
#include "ESBZVehicleLightCPD.h"
#include "ESBZVehicleLightType.h"
#include "SBZDebugSnapshot.h"
#include "SBZVehicleDoorStatePerType.h"
#include "SBZVehicleInterface.h"
#include "SBZVehicleLights.h"
#include "SBZWheeledVehicleFX.h"
#include "SBZWheeledVehicleOnBeginObstacleDelegate.h"
#include "SBZWheeledVehicleOnBeginStopDelegate.h"
#include "SBZWheeledVehicleOnEndObstacleDelegate.h"
#include "SBZWheeledVehicleOnPathEndReachedDelegate.h"
#include "SBZWheeledVehicleOnSplineEndReachedDelegate.h"
#include "SBZWheeledVehicleOnSplineEnteredDelegate.h"
#include "SBZWheeledVehicleOnSplineLeftDelegate.h"
#include "SBZWheeledVehicleOnStoppedDelegate.h"
#include "SBZWheeledVehicleReplicatedMovement.h"
#include "SBZWheeledVehicle.generated.h"

class AActor;
class ASBZCoverPoint;
class ASBZSpline;
class USBZAmbientSoundRadioComponent;
class USBZVariationSetData;
class USBZVehicleAnimationCollection;
class USBZVehicleSpawnComponent;
class USBZVehicleSplineFollowingComponent;
class USBZWheeledVehicleAudioComponent;
class USBZWheeledVehicleNavModifierComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZWheeledVehicle : public AWheeledVehicle, public ISBZVehicleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWheeledVehicleOnBeginStop OnBeginStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWheeledVehicleOnStopped OnStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWheeledVehicleOnSplineEntered OnSplineEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWheeledVehicleOnSplineLeft OnSplineLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWheeledVehicleOnSplineEndReached OnSplineEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWheeledVehicleOnPathEndReached OnPathEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWheeledVehicleOnBeginObstacle OnBeginObstacle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWheeledVehicleOnEndObstacle OnEndObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZWheeledVehicleAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAmbientSoundRadioComponent* RadioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSBZVehicleLights> LightsCPDGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ActiveLightsBitmask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVehicleAnimationCollection* AnimationCollection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVariationSetData* VariationSetData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZWheeledVehicleNavModifierComponent* NavModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollisionExtentShrinkFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoorStatesPerType, meta=(AllowPrivateAccess=true))
    TArray<FSBZVehicleDoorStatePerType> DoorStatesPerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWheeledVehicleFX> FXs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZVehicleSplineFollowingComponent* SplineFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Obstacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZCoverPoint*> CachedCoverPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObstacleCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepMove, meta=(AllowPrivateAccess=true))
    FSBZWheeledVehicleReplicatedMovement RepMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Seed, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDebugSnapshot> DebugSnapshots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DebugLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DebugServerLocation0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DebugServerLocation1;
    
public:
    ASBZWheeledVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void SetLightType(ESBZVehicleLightType LightType, bool bIsOn);
    
    UFUNCTION(BlueprintCallable)
    void SetLightCPDBroken(int32 CPDIndex, ESBZVehicleLightCPD LightBit, bool bIsBroken);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDoorState(ESBZVehicleDoorType DoorType, ESBZVehicleDoorState DoorState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSwitchSplineDirectionCallback(ASBZSpline* Spline);
    
    UFUNCTION(BlueprintCallable)
    void OnStoppedCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnSplineLeftCallback(ASBZSpline* Spline);
    
    UFUNCTION(BlueprintCallable)
    void OnSplineEnteredCallback(ASBZSpline* Spline, bool bPathEntered, bool bTeleportToPathStart);
    
    UFUNCTION(BlueprintCallable)
    void OnSplineEndReachedCallback(ASBZSpline* Spline);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Seed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepMove();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoorStatesPerType();
    
    UFUNCTION(BlueprintCallable)
    void OnPathEndReachedCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginStopCallback();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDoorState(ESBZVehicleDoorType DoorType, ESBZVehicleDoorState DoorState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZVehicleSplineFollowingComponent* GetVehicleSplineFollowingComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZVehicleDoorState GetDoorState(ESBZVehicleDoorType DoorType) const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    USBZVehicleSplineFollowingComponent* GetSplineFollowingComponent() const override PURE_VIRTUAL(GetSplineFollowingComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    USBZVehicleSpawnComponent* GetSpawnComponent() const override PURE_VIRTUAL(GetSpawnComponent, return NULL;);
    
};

