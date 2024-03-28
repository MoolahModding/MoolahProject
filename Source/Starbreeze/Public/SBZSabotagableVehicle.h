#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ESBZVehicleDoorState.h"
#include "SBZOnVehicleEscortChangedDelegate.h"
#include "SBZOnVehicleSabotageChangedDelegate.h"
#include "SBZWheeledVehicle.h"
#include "Templates/SubclassOf.h"
#include "SBZSabotagableVehicle.generated.h"

class AActor;
class ASBZSabotagePoint;
class UBoxComponent;
class UCapsuleComponent;
class UPrimitiveComponent;
class USBZPredefinedBoxNavModifierComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ASBZSabotagableVehicle : public ASBZWheeledVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnVehicleSabotageChanged OnVehicleSabotageChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnVehicleEscortChanged OnVehicleEscortChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZSabotagePoint> SabotagePointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPredefinedBoxNavModifierComponent* MovingNavModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SabotageAreaOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZSabotagePoint* SabotagePointInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* EscortCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayersOverlapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EscortModeEnabled, meta=(AllowPrivateAccess=true))
    bool bEscortModeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartWithEscortModeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EscortSizePreplanningTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortCapsulePreplanningRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortCapsulePreplanningHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* InsideTruckVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* InsideTruckTeleportLocation;
    
public:
    ASBZSabotagableVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void UpdateSabotageVehicle();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnSabotagePoint();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRearDoorsState(ESBZVehicleDoorState NewState);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEscortModeEnabled(bool bEnabled);
    
private:
    UFUNCTION()
    void OnStopped();
    
    UFUNCTION()
    void OnStartedFollowingSpline();
    
    UFUNCTION()
    void OnSabotaged(bool bWasSabotaged);
    
    UFUNCTION()
    void OnRep_EscortModeEnabled();
    
    UFUNCTION()
    void OnPlayerInsideTruckBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnPathEnded();
    
    UFUNCTION()
    void OnEscortCapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnEscortCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetRearDoorsState(ESBZVehicleDoorState NewState);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetEscortModeEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnPlayersInEscortChanged(const int32 PlayersEscorting);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnEscortSizePreplanningApplied();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnEscortModeChanged(bool bEnabled, bool bDoCosmetics);
    
};

