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
#include "SBZHoldOutObjectiveSelectedDelegate.h"
#include "SBZHoldOutObjectiveStartedDelegate.h"
#include "SBZHoldOutTimedEventData.h"
#include "SBZSpawnWaveFilteredBehavior.h"
#include "SBZSpawnWaveFilteredOrder.h"
#include "SBZTagEventActiveDelegateDelegate.h"
#include "SBZTagEventInterface.h"
#include "SBZHoldOutArea.generated.h"

class ASBZAIProtectPoint;
class ASBZHoldOutAIDrone;
class ASBZHoldOutArea;
class USBZHoldOutFogProgressionComponent;
class USBZHoldOutObjectiveBase;
class USBZSpawnWaveProgressionComponent;
class USBZSpawnWaveSettingsProxyComponent;

UCLASS(Blueprintable)
class ASBZHoldOutArea : public AActor, public ISBZTagEventInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutObjectiveSelected OnObjectiveSelected;
    
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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSpawnWaveFilteredOrder> OnAreaCompletedAIOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSpawnWaveFilteredBehavior> OnAreaCompletedAIBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZHoldOutObjectiveBase*> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZAIProtectPoint*> ProtectPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayWidgetOnSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> ModifierCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZHoldOutModeDifficulty, FSBZHoldOutModifiers> ModifiersPerDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZHoldOutArea*> CompatiblePreviousAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEscapeArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeFirstRandomWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> AdditionalRandomLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DroneMoveToLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSpawnWaveSettingsProxyComponent* SpawnWaveSettingsProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSpawnWaveProgressionComponent* SpawnWaveProgressionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplySpawnSettingsWhenSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHoldOutFogProgressionComponent* FogProgressionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZHoldOutModeDifficulty MinDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHoldOutTimedEventData> TimedEventDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Payout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZHoldOutAIDrone* Drone;
    
public:
    ASBZHoldOutArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Start(ESBZHoldOutModeDifficulty Difficulty);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SelectAsCurrentArea(ASBZHoldOutAIDrone* InDrone);
    
    UFUNCTION(BlueprintCallable)
    void RandomizeArea();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStartedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveSelectedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveResultChangedCallBack(const ESBZHoldOutObjectiveResult Result, USBZHoldOutObjectiveBase* InObjective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveProgressChangedCallBack(USBZHoldOutObjectiveBase* Objective, int32 OldProgressCount, int32 NewProgressCount, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsAnyObjectiveActive(bool bIgnoreOptionalObjectives) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDroneMoveToLocation() const;
    

    // Fix for true pure virtual functions not being implemented
};

