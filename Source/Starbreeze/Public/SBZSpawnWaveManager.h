#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZDifficulty.h"
#include "SBZSpawnWaveFilteredBehavior.h"
#include "SBZSpawnWaveFilteredOrder.h"
#include "SBZSpawnWaveSettings.h"
#include "SBZSpawnWaveManager.generated.h"

class APawn;
class USBZSpawnManager;
class USBZSpawnWaveManager;
class USBZSpawnWaveSettingsProxyComponent;

UCLASS(Blueprintable)
class USBZSpawnWaveManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSpawnWaveSettingsProxyComponent* SpawnWaveSettingsProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> SpawnedPawns;
    
public:
    USBZSpawnWaveManager();

    UFUNCTION(BlueprintCallable)
    void SetSpawnWaveSettingsProxy(const USBZSpawnWaveSettingsProxyComponent* InSpawnWaveSettingsProxy);
    
    UFUNCTION(BlueprintCallable)
    void SetOrderOnSpawnedPawns(const FSBZSpawnWaveFilteredOrder& FilteredOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(ESBZDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetBehaviorOnSpawnedPawns(const FSBZSpawnWaveFilteredBehavior& FilteredBehavior);
    
    UFUNCTION(BlueprintCallable)
    static void PopulateSpawnTypeLimitsOnWave(UPARAM(Ref) FSBZSpawnWaveSettings& WaveSettings);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnSpawned(USBZSpawnManager* SpawnManager, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnKilled(APawn* Pawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZSpawnWaveSettingsProxyComponent* GetSpawnWaveSettingsProxy() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZSpawnWaveManager* Get(const UObject* WorldContextObject);
    
};

