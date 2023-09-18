#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESBZDifficulty.h"
#include "ESBZEndMissionResult.h"
#include "ESBZMilestoneType.h"
#include "ESBZSecurityCompany.h"
#include "SBZDamageEvent.h"
#include "SBZEndMissionResultData.h"
#include "SBZEquippableConfig.h"
#include "SBZGameStateBase.h"
#include "SBZOnFBIActivationChangedDelegate.h"
#include "SBZPreplanningAsset.h"
#include "SBZRepSharedKeyItemTags.h"
#include "SBZStatisticCodeCollection.h"
#include "SBZStatisticCriteriaDataCollection.h"
#include "SBZVariationSeedGenerator.h"
#include "SBZMissionState.generated.h"

class AActor;
class ASBZAICrewState;
class ASBZCharacter;
class UAkAudioBank;
class USBZActorPoolManager;
class USBZAgentManager;
class USBZBagManager;
class USBZCosmeticDestructionComponent;
class USBZDialogManager;
class USBZKeyItemData;
class USBZLifeActionManager;
class USBZMarkerManager;
class USBZPlayerCharacterData;
class USBZRagdollSyncManager;
class USBZSmallTalkManager;
class USBZStateMachineSharedState;
class USBZVariationSetData;
class USBZVehicleManager;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZMissionState : public ASBZGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnFBIActivationChanged OnFBIActivationChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZStatisticCodeCollection StatisticCodeCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZStatisticCriteriaDataCollection StatisticsCriteriaDataCollection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RandomSeed, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerChangelist, meta=(AllowPrivateAccess=true))
    int32 ServerChangelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Difficulty, meta=(AllowPrivateAccess=true))
    ESBZDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<ESBZSecurityCompany> SecurityCompanies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSBZRepSharedKeyItemTags> ReplicatedSharedKeyItemTagCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictionTimeOutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerUnblockAbilityEarlierSeconds;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int16 MissionStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USBZKeyItemData*> SharedKeyItemDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBagManager* BagManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZAICrewState*> AICrewStateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig RequestedOverkillWeaponConfig;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> SoundBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZDialogManager* DialogManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAgentManager* AgentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZRagdollSyncManager* RagdollSyncManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZVehicleManager* VehicleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMarkerManager* MarkerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLifeActionManager* LifeActionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZActorPoolManager* ActorPoolManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSmallTalkManager* SmallTalkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZStateMachineSharedState* StateMachineSharedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayersInEscapeVolume, meta=(AllowPrivateAccess=true))
    uint8 PlayersInEscapeVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayersRequiredInEscapeVolume, meta=(AllowPrivateAccess=true))
    uint8 PlayersRequiredInEscapeVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EscapeTimeLeft, meta=(AllowPrivateAccess=true))
    int32 EscapeTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 KillingSpreeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropKillingSpreeWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PreplanningAssetsApplied, meta=(AllowPrivateAccess=true))
    TArray<FSBZPreplanningAsset> PreplanningAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxQueuedCosmeticDestruction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval TimeBetweenQueuedCosmeticDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZCosmeticDestructionComponent*> QueuedCosmeticDestructionExplosions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HeavyEnemiesTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZVariationSeedGenerator VariationSeedGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverkillWeaponCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlayerCharacterData* TutorialPlayerCharacterData;
    
public:
    ASBZMissionState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void ServerPostOnTakenDamageEvent(const FSBZDamageEvent& DamageEventData);
    
public:
    UFUNCTION(BlueprintCallable)
    void RewardCompleteExperienceObjective(const FString& ObjectName);
    
    UFUNCTION(BlueprintCallable)
    void RewardCompleteExperienceMilestone(const FString& MilestoneName);
    
    UFUNCTION(BlueprintCallable)
    void ResetPreplanningAssets();
    
    UFUNCTION(BlueprintCallable)
    void RemovePreplanningAsset(const FUniqueNetIdRepl& InPlayerId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStandaloneNetIDEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerChangelist();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RandomSeed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PreplanningAssetsApplied();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersRequiredInEscapeVolume();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersInEscapeVolume();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EscapeTimeLeft();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Difficulty();
    
    UFUNCTION(BlueprintCallable)
    void OnBlackScreenStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnActionPhaseStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnActionPhaseExited();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyClientPassedMilestone(ESBZMilestoneType MilestoneType, const FString& MilestoneName);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPreplanningAssetsApplied();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartOverkillCooldown();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetEscapeVolumeData(const uint8 InPlayersInVolume, const uint8 InTotal);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetEscapeTimeLeft(const int32 NewTime);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_MissionResult(const FSBZEndMissionResultData& InMissionResultData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_MissionEnd(const int32 OutroVariation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsFBIActive(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSharedKeyItemTag(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasPreplanningTag(FGameplayTag InTag, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttributedAllVariations(const USBZVariationSetData* VariationData) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSharedKeyItemTagChanged(const FGameplayTag Tag, int32 Count);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ESBZSecurityCompany> GetSecurityCompanies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZMissionState* GetSBZMissionState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomSeed() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetPreplanningTags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FRandomStream GetMixedRandomStream(int32 MixSeed, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMixedRandomSeed(int32 MixSeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZEndMissionResultData GetMissionResultData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZEndMissionResult GetMissionResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDifficultyIdx() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterSeed(const ASBZCharacter* Character, int32 MixSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHideAllOutlinesChanged(bool bIsHidden);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPreplanningAssets();
    
    UFUNCTION(BlueprintCallable)
    bool AddPreplanningAsset(const FUniqueNetIdRepl& InPlayerId, const FString& InSkuNo);
    
};

