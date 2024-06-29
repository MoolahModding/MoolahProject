#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutObjectiveBase.h"
#include "SBZHoldOutKillEnemiesObjective.generated.h"

class APawn;
class USBZSpawnManager;

UCLASS(Blueprintable, EditInlineNew)
class USBZHoldOutKillEnemiesObjective : public USBZHoldOutObjectiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumEnemiesToKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PawnTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> SpawnedEnemies;
    
public:
    USBZHoldOutKillEnemiesObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(USBZSpawnManager* SpawnManager, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(APawn* Pawn);
    
};

