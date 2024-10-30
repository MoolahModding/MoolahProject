#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Curves/CurveFloat.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "ESBZAIVisibilityNodeComputationFrequency.h"
#include "ESBZRuntimeState.h"
#include "SBZAIVisibilityRelevant.h"
#include "SBZAutoAimInterface.h"
#include "SBZEquippableConfig.h"
#include "SBZExplosionResult.h"
#include "SBZExplosive.h"
#include "SBZFactionIdHelper.h"
#include "SBZHurtReactionData.h"
#include "SBZHurtReactionDataInterface.h"
#include "SBZMarkableInterface.h"
#include "SBZPawnInterface.h"
#include "SBZPawnLifetime.h"
#include "SBZProjectileInterface.h"
#include "SBZReplicatedEquippableState.h"
#include "SBZRoomVolumeInterface.h"
#include "SBZRuntimeInterface.h"
#include "SBZTypeInterface.h"
#include "SBZVoiceComponentInterface.h"
#include "Templates/SubclassOf.h"
#include "SBZAIDrone.generated.h"

class AActor;
class ASBZEquippable;
class ASBZRangedWeapon;
class ASBZRoomVolume;
class UAIPerceptionStimuliSourceComponent;
class UAkAudioEvent;
class UAkComponent;
class UGameplayEffect;
class UNiagaraComponent;
class UNiagaraSystem;
class USBZAICharacterAbilityData;
class USBZAIDroneAttributeSet;
class USBZAbilitySystemComponent;
class USBZBaseInteractableComponent;
class USBZCharacterVoiceComponent;
class USBZHackableInteractableComponent;
class USBZInteractorComponent;
class USBZLocalPlayerFeedback;
class USBZOutlineAsset;
class USBZOutlineComponent;
class USBZShoutTargetComponent;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class ASBZAIDrone : public ACharacter, public ISBZPawnInterface, public IAbilitySystemInterface, public IGenericTeamAgentInterface, public ISBZPawnLifetime, public ISBZProjectileInterface, public ISBZTypeInterface, public ISBZAIVisibilityRelevant, public ISBZRoomVolumeInterface, public IGameplayTagAssetInterface, public ISBZRuntimeInterface, public ISBZExplosive, public ISBZHurtReactionDataInterface, public ISBZVoiceComponentInterface, public ISBZAutoAimInterface, public ISBZMarkableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIDroneAttributeSet* AttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DestroyedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DestroyedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEquippableConfig> EquippableConfigArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZEquippable*> EquippableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferredRangeBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAICharacterAbilityData* AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAIVisibilityNodeComputationFrequency AIVisibilityNodeComputationFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterVoiceComponent* VoiceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* StimuliSourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShoutTargetComponent* ShoutTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRangedWeapon* RangedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RangedWeaponAttachmentSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZRoomVolume*> RoomVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHackableInteractableComponent* HackableInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RuntimeState, meta=(AllowPrivateAccess=true))
    uint8 RuntimeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionIdHelper HackedFactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerExplosionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIExplosionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EMPEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EMPExplodedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* EMPDetonationEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EMPStunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> TacticalFlashEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> TacticalFlashPlayerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuaranteedFlashDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAngleDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashPlayerFalloffExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve TacticalFlashFeedbackCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TacticalFlashTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashTagEffectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TacticalFlashRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffBlockMinThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffBlockCooldownAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionData HurtReactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* RuntimedComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* FireWeaponComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ExplosionInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticsMarkDrone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticsMarkEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticsMarkEnemyCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticsMarkEnemyMicroCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> MarkedGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* MarkedOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AKComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SentryHackDamageAmount[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SentryHackDamageInterval[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDeathAllowed: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTelegraphAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsHackingSentry, meta=(AllowPrivateAccess=true))
    bool bIsHackingSentry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* HackingSentryEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* HackingSentryEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TraceEffectDistanceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TraceEffectStunDurationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TraceEndBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HackingSentryEventStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HackingSentryEventStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZReplicatedEquippableState ReplicatedEquippableState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> HackedByPlayerArray;
    
public:
    ASBZAIDrone(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnServerAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRuntimeStateRemoved(ESBZRuntimeState AppliedState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRuntimeStateApplied(ESBZRuntimeState AppliedState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RuntimeState();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsHackingSentry();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPredictedAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
    UFUNCTION(BlueprintCallable)
    void OnAckAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TelegraphAttack(bool bInIsTelegraphingAttack);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopHackingSentry();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartHackingSentry();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetRuntimed(ESBZRuntimeState InRuntimeState);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCurrentTarget(AActor* NewTarget);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ReplicateExplosion(const FSBZExplosionResult& Result);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RemoveRuntime(ESBZRuntimeState InRuntimeToRemove);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PredictedRagdollDenied(int32 HurtReactionIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnKill();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnKill_Client();
    
    UFUNCTION(BlueprintCallable)
    void AddForce(const FVector& LinearForce);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);

    UFUNCTION(BlueprintCallable)
    UAbilitySystemComponent* GetAbilitySystemComponent() const override;
};

