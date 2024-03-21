#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "ESBZAIVisibilityNodeComputationFrequency.h"
#include "ESBZRuntimeState.h"
#include "SBZAbilitySystemComponent.h"
#include "SBZAIVisibilityRelevant.h"
#include "SBZAutoAimInterface.h"
#include "SBZEquippableConfig.h"
#include "SBZExplosionResult.h"
#include "SBZExplosive.h"
#include "SBZFactionIdHelper.h"
#include "SBZHurtReactionData.h"
#include "SBZHurtReactionDataInterface.h"
#include "SBZPawnInterface.h"
#include "SBZPawnLifetime.h"
#include "SBZProjectileInterface.h"
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
class UGameplayEffect;
class UNiagaraSystem;
class USBZAICharacterAbilityData;
class USBZAIDroneAttributeSet;
class USBZAbilitySystemComponent;
class USBZBaseInteractableComponent;
class USBZCharacterVoiceComponent;
class USBZHackableInteractableComponent;
class USBZInteractorComponent;
class USBZOutlineComponent;
class USBZShoutTargetComponent;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class ASBZAIDrone : public ACharacter, public ISBZPawnInterface, public IAbilitySystemInterface, public IGenericTeamAgentInterface, public ISBZPawnLifetime, public ISBZProjectileInterface, public ISBZTypeInterface, public ISBZAIVisibilityRelevant, public ISBZRoomVolumeInterface, public IGameplayTagAssetInterface, public ISBZRuntimeInterface, public ISBZExplosive, public ISBZHurtReactionDataInterface, public ISBZVoiceComponentInterface, public ISBZAutoAimInterface {
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
    FSBZHurtReactionData HurtReactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* RuntimedComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* FireWeaponComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ExplosionInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector MoveUpVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
public:
    ASBZAIDrone(const class FObjectInitializer& ObjectInitializer);
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

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override
    {
        return AbilitySystemComponent;
    }
};

