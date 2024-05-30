#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "ESBZHoldOutObjectiveResult.h"
#include "SBZHoldOutAreaCompleteDelegate.h"
#include "SBZHoldOutObjectiveProgressChangedDelegate.h"
#include "SBZHoldOutObjectiveResultDelegate.h"
#include "SBZHoldOutObjectiveStartedDelegate.h"
#include "SBZSpawnWaveFilteredOrder.h"
#include "SBZHoldOutArea.generated.h"

class USBZHoldOutObjectiveBase;
class USBZSpawnWaveProgressionComponent;
class USBZSpawnWaveSettingsProxyComponent;

UCLASS(Blueprintable)
class ASBZHoldOutArea : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutObjectiveStarted OnObjectiveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutObjectiveResult OnObjectiveResultChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutObjectiveProgressChanged OnObjectiveProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutAreaComplete OnAreaCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZHoldOutObjectiveBase*> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSpawnWaveFilteredOrder> OnAreaCompletedAIOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DroneMoveToLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSpawnWaveSettingsProxyComponent* SpawnWaveSettingsProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSpawnWaveProgressionComponent* SpawnWaveProgressionComponent;
    
public:
    ASBZHoldOutArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Start();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStartedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTag& EventTag);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveResultChangedCallBack(const ESBZHoldOutObjectiveResult Result, USBZHoldOutObjectiveBase* InObjective, const FGameplayTag& EventTag);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveProgressChangedCallBack(USBZHoldOutObjectiveBase* Objective, float OldProgress, float NewProgress, const FGameplayTag& EventTag);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsAnyObjectiveActive(bool bIgnoreOptionalObjectives) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FVector GetDroneMoveToLocation() const;
    
};

