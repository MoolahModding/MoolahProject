#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "ESBZAIBehaviorCategory.h"
#include "ESBZAICharacterVariationCategory.h"
#include "ESBZInteractionAction.h"
#include "ESBZNegotiationTradeType.h"
#include "ESBZRoomLabel.h"
#include "ESBZRoomScanningType.h"
#include "SBZAIBaseCharacter.h"
#include "SBZAIVisualDetectorInterface.h"
#include "SBZAutoAimInterface.h"
#include "SBZBehaviorCategoryChangedDelegateDelegate.h"
#include "SBZMarkableInterface.h"
#include "SBZOnEnabledAsObjectiveDelegate.h"
#include "SBZOnHogTiedDelegate.h"
#include "SBZOnHumanShieldDelegate.h"
#include "SBZOnPlayerMeleeHitReceivedDelegate.h"
#include "SBZTagStanceMapping.h"
#include "Templates/SubclassOf.h"
#include "SBZAICharacter.generated.h"

class AController;
class ASBZAIPointOfInterest;
class ASBZAIPointOfInterestDeadBody;
class ASBZAmmoPickup;
class ASBZCarriedStaticInteractionActor;
class ASBZCharacter;
class ASBZLifeActionTriggerVolume;
class ASBZPlaceableCharges;
class ASBZPlayerCharacter;
class ASBZPlayerState;
class UDEPRECATED_SBZAlertnessDataComponent;
class UGameplayEffect;
class UNavigationQueryFilter;
class UPhysicalAnimationComponent;
class USBZAIAction;
class USBZAIEquipmentData;
class USBZAIUtilityData;
class USBZBaseInteractableComponent;
class USBZHelmetPopper;
class USBZHumanShieldData;
class USBZInteractorComponent;
class USBZMarkerComponent;
class USBZMarkerDataAsset;
class USBZOutlineAsset;
class USBZPagerData;
class USBZSensorComponent;
class USBZShoutTargetComponent;
class USBZSpecialAIComponent;
class USBZVariationSetData;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAICharacter : public ASBZAIBaseCharacter, public ISBZAIVisualDetectorInterface, public ISBZMarkableInterface, public ISBZAutoAimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockGoDownTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StunTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BulletMagnetismSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StickyAimSocketNameArray;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBehaviorCategoryChangedDelegate OnBehaviorCategoryChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnHogTied OnHogTiedChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnHumanShield OnHumanShieldChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPlayerMeleeHitReceived OnPlayerMeleeHitReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnEnabledAsObjective OnEnabledAsObjectiveDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownOnGroundEyeHeight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HostageState, meta=(AllowPrivateAccess=true))
    uint8 HostageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsSurrendered, meta=(AllowPrivateAccess=true))
    bool bIsSurrendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BehaviorCategory, meta=(AllowPrivateAccess=true))
    ESBZAIBehaviorCategory CurrentBehaviorCategory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSensorComponent* SensorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShoutTargetComponent* ShoutTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    USBZAIEquipmentData* EquipmentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHumanShieldData* HumanShieldData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHumanShieldData* SurrenderedHumanShieldData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAIUtilityData* SurrenderedUtilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZAmmoPickup> AmmoPickupAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZPlaceableCharges>> PlaceablePickupAssetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaceableSpawnForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZPlaceableCharges>> TradeHostagePickupAssetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDEPRECATED_SBZAlertnessDataComponent* AlertnessDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMarkerComponent* MarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHelmetPopper* HelmetPopper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSpecialAIComponent* SpecialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicalAnimationComponent* PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRunWhileFocusing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTelegraphAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferredCoverDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZInteractionAction, TSubclassOf<USBZAIAction>> InteractionActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* TradeOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* ReleasedOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* ObjectiveOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* ObjectiveMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ObjectiveMarkerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveMarkerSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZRoomLabel StartRoomLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AsObjectiveState, meta=(AllowPrivateAccess=true))
    uint8 AsObjectiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    USBZVariationSetData* VariationData;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FInt32Interval VariationCategoryIndexIntervals[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* LastInteractorCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotBlockedDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> SurrenderedNavFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZTagStanceMapping> TagToStanceMappingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DialogAllowedBehaviorCategory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TelegraphAttack, meta=(AllowPrivateAccess=true))
    bool bTelegraphAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* FireWeaponComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* OnKilledComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* TauntComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* HumanShieldTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* HumanShieldReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZAIPointOfInterestDeadBody> DeadBodyPOIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZAIPointOfInterest> HostagePOIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZAIPointOfInterest> HumanShieldPOIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIPointOfInterestDeadBody* DeadBodyPOIInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIPointOfInterest* HostagePOIInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIPointOfInterest* HumanShieldPOIInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsValidHumanShield: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPagerEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPagerEnabledOnce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCarriedKillInteraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsBeingHogTied: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasBeenHogtied: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInDownOnGroundPose: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPagerSnatched: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsScramblerSignalScanSkillActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasGuardBehavior: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsHogTiedOnce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* LastTieHandsInstigatorPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPagerData* PagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PagerTriggeredCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZInteractorComponent* PagerSnatchedInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavQueryFilterOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ValidTargetDefeatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanShootDownedIfFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> HackedGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCarriedStaticInteractionActor* AttachedLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZLifeActionTriggerVolume* CurrentLifeActionTriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* LocallyDamagedByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* PendingMeleeDownOnGoundInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* SurrenderInstigatorPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VariationCategory, meta=(AllowPrivateAccess=true))
    ESBZAICharacterVariationCategory VariationCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MarkGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MarkSpecials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MarkEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticsMarkEnemyCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticsMarkEnemyMicroCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeSeenByThermalScope;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<uint32> CQCSpecialistPinPullerDoneSet;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<uint32> CQCSpecialistSoftAssetsDoneSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* KillInstigatorController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> HackedByPlayerArray;
    
public:
    ASBZAICharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    ASBZCarriedStaticInteractionActor* SpawnLootOnCharacter(TSubclassOf<ASBZCarriedStaticInteractionActor> ClassTOSpawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetStartRoomLabel();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveMarkerFromAsObjective();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnServerStartInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnServerEndInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnServerECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive);
    
    UFUNCTION(BlueprintCallable)
    void OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VariationCategory();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TelegraphAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSurrendered();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HostageState(uint8 OldHostageState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BehaviorCategory();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AsObjectiveState();
    
    UFUNCTION(BlueprintCallable)
    void OnPredictedEndInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnPredictedAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnNegotiationTradeTypeChanged(ESBZNegotiationTradeType OldType, ESBZNegotiationTradeType NewType);
    
    UFUNCTION(BlueprintCallable)
    void OnEndInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttachedLootTaken(USBZBaseInteractableComponent* BaseInteractable, USBZInteractorComponent* InInteractor, bool bIsLocallyControlledInteractor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAckRejectedPredictedInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnAckAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Surrender();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopRoomScanning(ESBZRoomScanningType RoomScanningType);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetVariationCategory(ESBZAICharacterVariationCategory Category);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetHacked(float Duration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetBehaviorCategory(ESBZAIBehaviorCategory RepCategory);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetAsObjectiveState(uint8 NewAsObjectiveState);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RoomScanning(ESBZRoomScanningType RoomScanningType, int32 AnimationIndex);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_HostageState(uint8 InHostageState);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DropAttachedLoot();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableAsObjective(bool bImmediately, float Distance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableAsObjective();
    

    // Fix for true pure virtual functions not being implemented
};

