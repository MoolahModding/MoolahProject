#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESBZHoldOutModeDifficulty.h"
#include "ESBZHoldOutObjectiveResult.h"
#include "SBZHoldOutAreaCompleteDelegate.h"
#include "SBZHoldOutModifiers.h"
#include "SBZHoldOutObjectiveProgressChangedDelegate.h"
#include "SBZHoldOutObjectiveResultDelegate.h"
#include "SBZHoldOutObjectiveStartedDelegate.h"
#include "SBZSpawnWaveFilteredOrder.h"
#include "SBZTagEventActiveDelegateDelegate.h"
#include "SBZTagEventInterface.h"
#include "SBZHoldOutArea.generated.h"

class ASBZAIProtectPoint;
class USBZHoldOutFogProgressionComponent;
class USBZHoldOutObjectiveBase;
class USBZSpawnWaveProgressionComponent;
class USBZSpawnWaveSettingsProxyComponent;

UCLASS(Blueprintable)
class ASBZHoldOutArea : public AActor, public ISBZTagEventInterface {
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
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTagEventActiveDelegate OnTagEventActiveDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZHoldOutObjectiveBase*> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSpawnWaveFilteredOrder> OnAreaCompletedAIOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZAIProtectPoint*> ProtectPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> ModifierCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZHoldOutModeDifficulty, FSBZHoldOutModifiers> ModifiersPerDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DroneMoveToLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSpawnWaveSettingsProxyComponent* SpawnWaveSettingsProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSpawnWaveProgressionComponent* SpawnWaveProgressionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHoldOutFogProgressionComponent* FogProgressionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZHoldOutModeDifficulty MinDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplySpawnSettingsWhenSelected;
    
public:
    ASBZHoldOutArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Start(ESBZHoldOutModeDifficulty Difficulty);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SelectAsCurrentArea();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStartedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveResultChangedCallBack(const ESBZHoldOutObjectiveResult Result, USBZHoldOutObjectiveBase* InObjective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveProgressChangedCallBack(USBZHoldOutObjectiveBase* Objective, int32 OldProgressCount, int32 NewProgressCount, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsAnyObjectiveActive(bool bIgnoreOptionalObjectives) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FVector GetDroneMoveToLocation() const;
    

    // Fix for true pure virtual functions not being implemented
};

