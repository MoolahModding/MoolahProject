#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerState.h"
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
#include "SBZEffectHandleArray.h"
#include "SBZOnInfamyLevelChangedDynamicDelegate.h"
#include "SBZPlayerAbilitySystemComponent.h"
#include "SBZPlayerEndMissionResultData.h"
#include "SBZReplicatedReloadState.h"
#include "SBZPlayerState.generated.h"

class AActor;
class ASBZAICharacter;
class ASBZGrenadeProjectile;
class ASBZPlayerCharacter;
class ASBZPlayerMicroCamera;
class ASBZPlayerState;
class ASBZTool;
class UClass;
class UPaperSprite;
class USBZCharacterEffectDataAsset;
class USBZEquippableData;
class USBZMaskData;
class USBZPingCallAsset;
class USBZPlaceableData;
class USBZPlayerAbilitySystemComponent;
class USBZPlayerAttributeSet;
class USBZPlayerCharacterData;
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Platform, meta=(AllowPrivateAccess=true))
    ESBZFirstPartyPlatform FirstPartyPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AccelByteDisplayName, meta=(AllowPrivateAccess=true))
    FString AccelByteDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AccelByteUserName, meta=(AllowPrivateAccess=true))
    FString AccelByteUserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AccelByteUserId, meta=(AllowPrivateAccess=true))
    FString AccelByteUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString AccelByteSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ServerRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZProgressionSaveGame* ProgressionSaveGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnInfamyLevelChangedDynamic OnInfamyLevelChangedDynamic;
    
protected:
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USBZSkillData*> SkillDataLookupMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> SkillTagSet;
    
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
    UClass* CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CustodyCharacterClass, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CustodyCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsValidLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DefeatState, meta=(AllowPrivateAccess=true))
    EPD3DefeatState DefeatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MiniGameState, meta=(AllowPrivateAccess=true))
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
    TArray<FActiveGameplayEffectHandle> AppliedLoadoutEffectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZSkillData*, FSBZEffectHandleArray> AppliedCrewSkillEffectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerMicroCamera* PlayerMicroCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZGrenadeProjectile*> ServerGrenadeProjectileArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSaveLoadoutPending;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpectateDurationArray[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumSpectateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpectateTime, meta=(AllowPrivateAccess=true))
    float SpectateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReducedCustodyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnSpectateDurationModificationChanged, meta=(AllowPrivateAccess=true))
    float SpectateDurationModification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectDataAsset* ECMGUIEffectData;
    
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
    
public:
    ASBZPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StopTargeting();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartTargeting();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetMiniGameState(EPD3MiniGameState InMiniGameState);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetEquipStateAndIndex(uint8 InEquipStateAndIndex);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetDropPlaceableEquippableData(const FSBZDropPlaceableEquippableData& Data);
    
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
    void OnRuntimeRoutedPingExpired(AActor* InRuntimeActor);
    
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
    void OnRep_MiniGameState(EPD3MiniGameState OldMiniGameState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Loadout(const FPD3PlayerLoadout& InOldLoadout);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsTargeting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMaskOn();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_InfamyLevel();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_EquipStateAndIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DefeatState(EPD3DefeatState OldDefeatState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CustodyCharacterClass();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_AccelByteUserName();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AccelByteUserId();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_AccelByteDisplayName();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime);
    
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
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetServerReloadState(const FSBZReplicatedReloadState& InServerReloadState);
    
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
    void Multicast_DebugConsoleCommand(const FString& Command, const FString& InstigatorContextText, bool bIsLocallyControlledOnly, int32 PlayerIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZPlatform GetPlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfamyLevel() const;
    
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
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendPlayerReloadProgressionSaveGame();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendOverkillWeaponProgress(float InOverkillWeaponProgress);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnSaveLoadoutPending();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CheatSetInfiniteAmmo(bool bInHasInifiniteAmmo);
    

    // Fix for true pure virtual functions not being implemented

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override
    {
        return AbilitySystem;
    }
};

