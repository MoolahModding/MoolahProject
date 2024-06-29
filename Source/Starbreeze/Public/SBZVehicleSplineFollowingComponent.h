#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZVehicleOnStartedDelegate.h"
#include "SBZVehicleSplineFollowingComponentReplicatedProperties.h"
#include "SBZVehicleSplineFollowingComponent.generated.h"

class ASBZSpline;
class USBZVehicleManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZVehicleSplineFollowingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVehicleOnStarted OnStarted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZVehicleManager* VehicleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSBZVehicleSplineFollowingComponentReplicatedProperties ReplicatedProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZSpline*> ClientPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TargetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float StopBeginSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float StopBeginDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float StopEndDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float DecelDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float DecelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CruisingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TurnCruisingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Deceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsStopping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsStopRequestedByUser: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZSpline*> FullPath;
    
public:
    USBZVehicleSplineFollowingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetPathSpline(ASBZSpline* Spline);
    
    UFUNCTION(BlueprintCallable)
    void SetPath(const TArray<ASBZSpline*>& Path, bool bTeleportToPathStart);
    
    UFUNCTION(BlueprintCallable)
    void SetDeceleration(float InDeceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetCruisingSpeed(float NewSpeed, bool bForceUpdateTargetSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetAcceleration(float InAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void PushPathSpline(ASBZSpline* Spline);
    
    UFUNCTION(BlueprintCallable)
    void PushPath(const TArray<ASBZSpline*>& Path);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopAtDistance(float Distance, bool bRequestedByUser);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Start();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPathSpline(ASBZSpline* InPath);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPath(const TArray<ASBZSpline*>& InPath, bool bTeleportToPathStart);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDeceleration(float ServerCurrentSpeed, const TArray<ASBZSpline*>& InServerPath, float InServerTraveledDistance, float InDeceleration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCruisingSpeed(float ServerCurrentSpeed, const TArray<ASBZSpline*>& InServerPath, float InServerTraveledDistance, float InSpeed, bool bForceUpdateTargetSpeed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetAcceleration(float ServerCurrentSpeed, const TArray<ASBZSpline*>& InServerPath, float InServerTraveledDistance, float InAcceleration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PushPathSpline(ASBZSpline* InPath);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PushPath(const TArray<ASBZSpline*>& InPath);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnStopped(ASBZSpline* Spline, float Distance);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnSplineLeft(ASBZSpline* Spline);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnSplineEntered(ASBZSpline* Spline, bool bPathEntered, bool bTeleportToPathStart);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnSplineEndReached(ASBZSpline* Spline);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnPathEndReached();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnBeginStop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPathLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASBZSpline*> GetPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZSpline* GetNextSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZSpline* GetLastSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASBZSpline*> GetFullPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZSpline* GetCurrentSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrakingDistance(bool bMaxBraking) const;
    
};

