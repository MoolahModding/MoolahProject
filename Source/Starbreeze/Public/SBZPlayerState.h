#pragma once
#include "CoreMinimal.h"
#include "ChallengeNotifPayload.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EPD3DefeatState.h"
#include "EPD3MiniGameState.h"
#include "EPlayerReadyStatusValue.h"
#include "ESBZFirstPartyPlatform.h"
#include "ESBZPlatform.h"
#include "PD3PlayerLoadout.h"
#include "SBZAmmoPickupLookup.h"
#include "SBZCrewStateInterface.h"
#include "SBZDropPlaceableEquippableData.h"
#include "SBZOnInfamyLevelChangedDynamicDelegate.h"
#include "SBZPlayerEndMissionResultData.h"
#include "SBZPlayerSkillEffectData.h"
#include "SBZReplicatedReloadState.h"
#include "SBZVoiceSessionData.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerState.generated.h"

class AActor;
class ASBZAICharacter;
class ASBZGrenadeProjectile;
class ASBZPlayerCharacter;
class ASBZPlayerMicroCamera;
class ASBZPlayerState;
class ASBZTool;
class UPaperSprite;
class USBZArmorData;
class USBZCharacterEffectDataAsset;
class USBZEquippableData;
class USBZMaskData;
class USBZOverskillData;
class USBZPingCallAsset;
class USBZPlaceableData;
class USBZPlayerAbilitySystemComponent;
class USBZPlayerAttributeSet;
class USBZPlayerCharacterData;
class USBZProgressionSaveChallenges;
class USBZProgressionSaveGame;
class USBZSkillData;
class USBZThrowableData;
class USBZToolCuttingData;
class USBZToolData;
class USBZUICharacterEffectComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPlayerState : public APlayerState, public ISBZCrewStateInterface, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReadyStatus, meta=(AllowPrivateAccess=true))
    EPlayerReadyStatusValue ReadyStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InfamyLevel, meta=(AllowPrivateAccess=true))
    int32 InfamyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Platform, meta=(AllowPrivateAccess=true))
    ESBZPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FirstPartyPlatform, meta=(AllowPrivateAccess=true))
    ESBZFirstPartyPlatform FirstPartyPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AccelByteDisplayName, meta=(AllowPrivateAccess=true))
    FString AccelByteDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AccelByteUserName, meta=(AllowPrivateAccess=true))
    FString AccelByteUserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AccelByteUserId, meta=(AllowPrivateAccess=true))
    FString AccelByteUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString AccelByteSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EOSProductUserId, meta=(AllowPrivateAccess=true))
    FString EOSProductUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZProgressionSaveGame* ProgressionSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZProgressionSaveChallenges* ProgressionSaveChallenges;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnInfamyLevelChangedDynamic OnInfamyLevelChangedDynamic;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnIsSkipIntroSequenceChanged, meta=(AllowPrivateAccess=true))
    bool bIsSkipIntroSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ServerRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerAttributeSet* AttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZUICharacterEffectComponent* UICharacterEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 PlayerSlotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> PlayerColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagContainer> WeaponTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZPingCallAsset*> EquippablePings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedStartReplenishDodgeServerTime, meta=(AllowPrivateAccess=true))
    float ReplicatedStartReplenishDodgeServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StartReplenishDodgeServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StartReplenishDodgeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsMaskOn, meta=(AllowPrivateAccess=true))
    bool bIsMaskOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Loadout, meta=(AllowPrivateAccess=true))
    FPD3PlayerLoadout Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPD3PlayerLoadout OldLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLocallyControlled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EquipStateAndIndex, meta=(AllowPrivateAccess=true))
    uint8 EquipStateAndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerReloadState, meta=(AllowPrivateAccess=true))
    FSBZReplicatedReloadState ServerReloadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZPlayerCharacter> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CustodyCharacterClass, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CustodyCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsValidLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DefeatState, meta=(AllowPrivateAccess=true))
    EPD3DefeatState DefeatState;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_OnKillNetID, meta=(AllowPrivateAccess=true))
    uint32 OnKillNetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MiniGameState, meta=(AllowPrivateAccess=true))
    EPD3MiniGameState MiniGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPlayerEndMissionResultData ResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsNetInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAttributeSetInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAttributeSetInitializedOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPendingReconnectData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FSBZAmmoPickupLookup> AmmoPickupLookupMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLoadoutLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsApplyingLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> LastLoadedAssetRefArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerCharacterData* CurrentCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZTool*> PlaceableToolsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> TagCounterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZPlayerCharacter*> PlayerCharacterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZSkillData*, FSBZPlayerSkillEffectData> AppliedLoadoutSkillEffectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZArmorData* AppliedLoadoutArmorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle AppliedLoadoutArmorEffectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZSkillData*, FSBZPlayerSkillEffectData> AppliedCrewSkillEffectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerMicroCamera* PlayerMicroCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZGrenadeProjectile*> ServerGrenadeProjectileArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSaveLoadoutPending;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpectateDurationArray[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReconnectDefeatedCustodyDurationReductionArray[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumSpectateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpectateTime, meta=(AllowPrivateAccess=true))
    float SpectateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ReducedCustodyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnSpectateDurationModificationChanged, meta=(AllowPrivateAccess=true))
    float SpectateDurationModification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectDataAsset* ECMGUIEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectDataAsset* PrecisionShotGUIEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USBZCharacterEffectDataAsset*> TagGUIDataMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, uint32> TagGUIDataHandleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SkillTankDisengageActivatedTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RuntimeActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* SurrenderedEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EnforcerSkillKillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EnforcerSkillLastKillTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EnforcerAcedSkillKillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SelectedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OverkillWeaponProgress, meta=(AllowPrivateAccess=true))
    float OverkillWeaponProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverkillWeaponProgressKillIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverkillWeaponProgressHeadshotAdditionalIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverkillWeaponProgressObjectiveIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverkillWeaponProgressSubObjectiveIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLastArrestedByGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsTargeting, meta=(AllowPrivateAccess=true))
    bool bIsTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CustodyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CustodyReleaseCost, meta=(AllowPrivateAccess=true))
    int32 CustodyReleaseCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentTradeReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bServerIsHardBargainCustody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MergePartySelected, meta=(AllowPrivateAccess=true))
    bool bIsMergePartySelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupConsumableCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZOverskillData*> EquippedOverskillArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillData*> EquippedOverskillSkillDataArray;
    
public:
    ASBZPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetSkipIntroSequence(bool bInIsSkipIntroSequence);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_VoiceSessionLeft();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_VoiceSessionJoined();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_VoiceSessionCreateFailed();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_VoiceSessionCreated(const FString& SessionId);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateGameSession();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StopTargeting();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartTargeting();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetSkipIntroSequence(bool bInIsSkipIntroSequence);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetMiniGameState(EPD3MiniGameState InMiniGameState);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetEquipStateAndIndex(uint8 InEquipStateAndIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetEOSProductUserId(const FString& InEOSProductUserId);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetDropPlaceableEquippableData(const FSBZDropPlaceableEquippableData& Data);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestVoiceSessionLeave(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestVoiceSessionJoin(const FUniqueNetIdRepl& InPlayerId);
    
public:
    UFUNCTION(Reliable, Server)
    void Server_PickupAmmo(uint32 ID, bool bIsSimulatedPickup);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DebugConsoleCommand(const FString& Command, const FString& InstigatorContextText, bool bIsLocallyControlledOnly, bool bIsExecutedOnAll, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CheatSetLoadout(const FPD3PlayerLoadout& InLoadout);
    
    UFUNCTION(BlueprintCallable)
    void OnSpectateDurationModificationChanged(float OldDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnRuntimeSecureLoopExpired(AActor* InRuntimeActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRuntimeScramblerExpired(AActor* InRuntimeActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRuntimeRoutedPingExpired(AActor* InRuntimeActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRuntimeActorEndPlay(AActor* RuntimeActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnRuntimeActorDestroyed(AActor* InRuntimeActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpectateTime(float OldSpectateTime);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerReloadState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedStartReplenishDodgeServerTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyStatus();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Platform();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_OverkillWeaponProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnKillNetID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MiniGameState(EPD3MiniGameState OldMiniGameState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MergePartySelected();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Loadout(const FPD3PlayerLoadout& InOldLoadout);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsTargeting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMaskOn();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_InfamyLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FirstPartyPlatform();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_EquipStateAndIndex(uint8 OldEquipStateAndIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EOSProductUserId(const FString& OldEOSProductUserId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DefeatState(EPD3DefeatState OldDefeatState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CustodyReleaseCost();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CustodyCharacterClass();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_AccelByteUserName();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AccelByteUserId(const FString& OldAccelByteUserId);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_AccelByteDisplayName();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnIsSkipIntroSequenceChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyClientsHostRestart(int32 ServerRestartTimeInSeconds);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopTargeting();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartTargeting();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartDodgeReplenish(float InStartReplenishDodgeServerTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSpectateTime(float Time);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSpectateDurationModification(float Duration);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSkipIntroSequence(bool bInIsSkipIntroSequence);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetServerReloadState(const FSBZReplicatedReloadState& InServerReloadState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPlayerSlotId(uint8 NewSlotId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPlayerId(int32 InPlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetMiniGameState(EPD3MiniGameState InMiniGameState, ASBZPlayerState* InWinningParticipant);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetLoadout(const FPD3PlayerLoadout& InLoadout);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetLastArrestedByGuard(bool bInIsLastArrestedByGuard);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetEquipStateAndIndex(uint8 InEquipStateAndIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetEOSProductUserId(const FString& InEOSProductUserId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDefeatState(EPD3DefeatState InDefeatState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCustodyCharacterClass(FSoftObjectPath InCharacterClass);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetAccelByteUserName(const FString& InAccelByteUserName);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetAccelByteUserId(const FString& InAccelByteUserId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RejectEquipStateAndIndex(uint8 InEquipStateAndIndex);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnKill(uint32 NetID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DebugConsoleCommand(const FString& Command, const FString& InstigatorContextText, bool bIsLocallyControlledOnly, int32 PlayerIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkipIntroSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerDisplayNameReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZPlatform GetPlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMergePartySelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfamyLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEOSProductUserId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetCharacterIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAccelBytePlayerName() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipToolToLoadout(USBZToolData* ItemToEquip);
    
    UFUNCTION(BlueprintCallable)
    void EquipThrowableToLoadout(USBZThrowableData* ItemToEquip);
    
    UFUNCTION(BlueprintCallable)
    void EquipPlaceableToLoadout(USBZPlaceableData* ItemToEquip);
    
    UFUNCTION(BlueprintCallable)
    void EquipMaskToLoadout(USBZMaskData* ItemToEquip);
    
    UFUNCTION(BlueprintCallable)
    void EquipEquippableToLoadoutAt(const USBZEquippableData* EquippableToEquip, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void EquipCuttingToolToLoadout(USBZToolCuttingData* ItemToEquip);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetSurrenderedEnemy(ASBZAICharacter* InSurrenderedEnemy);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetReducedCustodyTime(float InReducedCustodyTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetCustodyReleaseCost(int32 InNewCustodyReleaseCost);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendPlayerReloadProgressionSaveGame();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendOverkillWeaponProgress(float InOverkillWeaponProgress);
    
public:
    UFUNCTION(Client, Reliable)
    void Client_PickupAmmo(uint32 ID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnSaveLoadoutPending();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_LeaveVoiceSession();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_JoinVoiceSession(const FSBZVoiceSessionData& VoiceSessionData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DestroyVoiceSession();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CreateVoiceSession();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CheatSetInfiniteAmmo(bool bInHasInifiniteAmmo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ChallengeCompleted(const FChallengeNotifPayload& ChallengeNotifPayload);
    

    // Fix for true pure virtual functions not being implemented

    UFUNCTION(BlueprintCallable)
    UAbilitySystemComponent* GetAbilitySystemComponent() const override;
    
};

