#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPD3HeistState.h"
#include "ESBZVehicleSpawnResult.h"
#include "SBZComponentSelector.h"
#include "SBZSpawnCompletedDelegateBPDelegate.h"
#include "SBZVehicleSpawnComponent.generated.h"

class APD3PawnSpawnGroup;
class APawn;
class ASBZAerialVehicle;
class ASBZAgilityPawnSpawnPredefined;
class ASBZPawnSpawnBase;
class ASBZSpline;
class ASBZWheeledVehicle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZVehicleSpawnComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSpawnCompletedDelegateBP OnSpawnCompletedBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector SpawnGroupSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZComponentSelector> SpawnerSelectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableForAssault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialSpawnOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomSpawnCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APD3PawnSpawnGroup* SpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZAgilityPawnSpawnPredefined*> Spawners;
    
public:
    USBZVehicleSpawnComponent();

private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnCompleted(ESBZVehicleSpawnResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnWheeledStarted(ASBZWheeledVehicle* Vehicle, ASBZSpline* Spline);
    
    UFUNCTION(BlueprintCallable)
    void OnWheeledReachedPathEnd(ASBZWheeledVehicle* Vehicle);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnSpawned(APD3PawnSpawnGroup* InSpawnGroup, ASBZPawnSpawnBase* Spawner, APawn* Pawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnAerialStarted(ASBZAerialVehicle* Vehicle, ASBZSpline* Spline);
    
    UFUNCTION(BlueprintCallable)
    void OnAerialReachedPathEnd(ASBZAerialVehicle* Vehicle);
    
};

