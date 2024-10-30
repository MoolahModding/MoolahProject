#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESBZHoldOutModeDifficulty.h"
#include "ESBZHoldOutObjectiveResult.h"
#include "SBZAIConfigDPSData.h"
#include "SBZGameplayTagCounterArray.h"
#include "SBZGameplayTagCounterArrayOwnerInterface.h"
#include "SBZHoldOutAreaCompleteDelegate.h"
#include "SBZHoldOutDifficultyIncreasedDelegate.h"
#include "SBZHoldOutDroneFogSettings.h"
#include "SBZHoldOutDroneMoveToAreaDelegate.h"
#include "SBZHoldOutDroneReactionArray.h"
#include "SBZHoldOutDroneTagReactionConfigArray.h"
#include "SBZHoldOutEventReactorReceiverInterface.h"
#include "SBZHoldOutObjectiveProgressChangedDelegate.h"
#include "SBZHoldOutObjectiveResultDelegate.h"
#include "SBZHoldOutObjectiveSelectedDelegate.h"
#include "SBZHoldOutObjectiveStartedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZHoldOutAIDrone.generated.h"

class ASBZHoldOutArea;
class ASBZObjective;
class UAkComponent;
class UGameplayEffect;
class USBZAbilitySystemComponent;
class USBZHoldOutDroneSoundCollection;
class USBZHoldOutDroneVoiceComponent;
class USBZHoldOutEventReactorComponent;
class USBZHoldOutFogApplierComponent;
class USBZHoldOutObjectiveBase;

UCLASS(Blueprintable)
class ASBZHoldOutAIDrone : public ACharacter, public ISBZGameplayTagCounterArrayOwnerInterface, public ISBZHoldOutEventReactorReceiverInterface {
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
    FSBZHoldOutDroneMoveToArea OnDroneMoveToArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutDifficultyIncreased OnDifficultyIncreased;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZHoldOutArea*> HoldOutAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZHoldOutArea*> CachedHoldOutAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSBZGameplayTagCounterArray GameplayTagCounterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZHoldOutDroneTagReactionConfigArray> TagReactionSpawnConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZHoldOutDroneReactionArray> TagDroneReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TagsForCurrentObjectives;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIConfigDPSData AIDPS[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZObjective* FollowDroneObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHoldOutFogApplierComponent* FogApplierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHoldOutEventReactorComponent* EventReactorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHoldOutDroneVoiceComponent* VoiceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHoldOutDroneSoundCollection* VOCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AKComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitHoldOutAreaIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PayoutLootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PayoutValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZHoldOutModeDifficulty CurrentDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentHoldOutAreaIndex;
    
public:
    ASBZHoldOutAIDrone(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StopOverrideFogSettings();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ShuffleAreaOrder();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInstantGameplayTags(const FGameplayTagContainer& InTags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInstantGameplayTag(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGameplayTag(const FGameplayTag& InTag, int32 Count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEventTags(const FGameplayTagContainer& InTags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SelectNextArea();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OverrideFogSettings(const FSBZHoldOutDroneFogSettings& FogSettings, float OverrideDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStartedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveSelectedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveResultChangedCallBack(const ESBZHoldOutObjectiveResult Result, USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveProgressChangedCallBack(USBZHoldOutObjectiveBase* Objective, int32 OldProgressCount, int32 NewProgressCount, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAreaCompletedCallBack(bool bSuccess, ASBZHoldOutArea* HoldOutArea);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SpawnTagReactionsForTag(const FGameplayTag& Tag, int32 OldTagCount, int32 TagCount);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCurrentHoldOutAreaIndex(int32 InCurrentHoldOutAreaIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyGamePlayEffectOnEnemies(TSubclassOf<UGameplayEffect> GameplayEffectClass);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MoveToNextHoldOutArea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameplayTagCount(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZHoldOutArea* GetCurrentArea() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearTagsForCurrentObjectives();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyGamePlayEffectOnEnemies(TSubclassOf<UGameplayEffect> GameplayEffectClass);
    

    // Fix for true pure virtual functions not being implemented
};

