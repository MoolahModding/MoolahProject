#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPD3HeistState.h"
#include "SBZTrafficDestinationNode.h"
#include "SBZTrafficGridlockInfo.h"
#include "SBZTrafficNode.h"
#include "SBZTrafficRouteArray.h"
#include "SBZTrafficSpawnInfo.h"
#include "SBZTrafficSpawnerNode.h"
#include "SBZTrafficVehicleInfo.h"
#include "SBZTrafficManager.generated.h"

class AActor;
class ASBZPedestrianTrafficNavLink;
class ASBZTrafficLights;
class ASBZTrafficSpline;
class ASBZWheeledVehicle;
class USBZTrafficSettings;
class UWorld;

UCLASS(Blueprintable, Within=PD3HeistGameMode)
class USBZTrafficManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZTrafficSettings* Settings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZTrafficSpline*, FSBZTrafficNode> TrafficNodeGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZTrafficSpline*, FSBZTrafficDestinationNode> DestinationNodeGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZTrafficSpline*, FSBZTrafficSpawnerNode> SpawnerNodeGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZTrafficVehicleInfo> VehicleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZTrafficSpawnInfo> VehiclesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZPedestrianTrafficNavLink*> PedestrianTrafficNavLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeToNextSpawnAttempt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AmountFirstRespondersLeftToArrive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZWheeledVehicle* EscapeVan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCivilianTrafficEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeToNextCivilianSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AmountActiveCivilianVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZWheeledVehicle*> ParkedCivilianVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZTrafficGridlockInfo> GridlockArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZTrafficLights*> TrafficLightArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZWheeledVehicle*, float> SoundHornTimerGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZTrafficSpline*, FSBZTrafficRouteArray> CachedCivilianRouteArrayGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZTrafficSpline*, FSBZTrafficRouteArray> CachedFirstResponderRouteArrayGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZTrafficSpline*, FSBZTrafficRouteArray> CachedFBIVanRouteArrayGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInActionPhase;
    
public:
    USBZTrafficManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnExitedActionPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredActionPhase(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void HandleVehicleStopped(ASBZWheeledVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void HandleVehicleEndObstacle(ASBZWheeledVehicle* Vehicle, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void HandleVehicleBeginObstacle(ASBZWheeledVehicle* Vehicle, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void HandleSwatVanArrived(ASBZWheeledVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void HandleHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
    UFUNCTION(BlueprintCallable)
    void HandleFirstResponderArrived(ASBZWheeledVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void HandleEscapeVanArrived(ASBZWheeledVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void HandleCivilianArrived(ASBZWheeledVehicle* Vehicle);
    
};

