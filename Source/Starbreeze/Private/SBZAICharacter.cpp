#include "SBZAICharacter.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAICharacterInteractableComponent.h"
#include "SBZAICharacterVoiceComponent.h"
#include "SBZAlertnessDataComponent.h"
#include "SBZHelmetPopper.h"
#include "SBZMarkerComponent.h"
#include "SBZSensorComponent.h"
#include "Templates/SubclassOf.h"

ASBZAICharacter::ASBZAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZAICharacterVoiceComponent>(TEXT("SBZCharacterVoiceComponent")).SetDefaultSubobjectClass<USBZAICharacterInteractableComponent>(TEXT("SBZInteractableComponent"))) {
    this->BulletMagnetismSocketName = TEXT("Head");
    this->StickyAimSocketNameArray.AddDefaulted(1);
    this->DownOnGroundEyeHeight = -32.00f;
    this->HostageState = 0;
    this->bIsSurrendered = false;
    this->CurrentBehaviorCategory = ESBZAIBehaviorCategory::None;
    this->SensorComponent = CreateDefaultSubobject<USBZSensorComponent>(TEXT("SBZSensorComponent"));
    this->ShoutTargetComponent = NULL;
    this->EquipmentData = NULL;
    this->HumanShieldData = NULL;
    this->SurrenderedHumanShieldData = NULL;
    this->SurrenderedUtilityData = NULL;
    this->AmmoPickupAsset = NULL;
    this->PlaceableSpawnForwardOffset = 0.00f;
    this->AlertnessDataComponent = CreateDefaultSubobject<UDEPRECATED_SBZAlertnessDataComponent>(TEXT("SBZAlertnessDataComponent"));
    this->MarkerComponent = CreateDefaultSubobject<USBZMarkerComponent>(TEXT("SBZMarkerComponent"));
    this->HelmetPopper = CreateDefaultSubobject<USBZHelmetPopper>(TEXT("HelmetPopper"));
    this->SpecialType = NULL;
    this->PhysicalAnimationComponent = CreateDefaultSubobject<UPhysicalAnimationComponent>(TEXT("PhysicalAnimationComponent"));
    this->bCanRunWhileFocusing = true;
    this->bShouldTelegraphAttack = false;
    this->PreferredCoverDist = 200.00f;
    this->TradeOutline = NULL;
    this->ReleasedOutline = NULL;
    this->ObjectiveOutline = NULL;
    this->ObjectiveMarker = NULL;
    this->StartRoomLabel = ESBZRoomLabel::OutsideHeistArea;
    this->AsObjectiveState = 0;
    this->VariationData = NULL;
    this->LastInteractorCharacter = NULL;
    this->ShotBlockedDownTime = 6.00f;
    this->SurrenderedNavFilter = NULL;
    this->DialogAllowedBehaviorCategory = 2;
    this->bTelegraphAttack = false;
    this->FireWeaponComment = NULL;
    this->OnKilledComment = NULL;
    this->TauntComment = NULL;
    this->HumanShieldTaken = NULL;
    this->HumanShieldReleased = NULL;
    this->DeadBodyPOIClass = NULL;
    this->HostagePOIClass = NULL;
    this->HumanShieldPOIClass = NULL;
    this->DeadBodyPOIInstance = NULL;
    this->HostagePOIInstance = NULL;
    this->HumanShieldPOIInstance = NULL;
    this->bIsValidHumanShield = false;
    this->bIsPagerEnabled = false;
    this->bIsPagerEnabledOnce = false;
    this->bIsCarriedKillInteraction = false;
    this->bIsBeingHogTied = false;
    this->bHasBeenHogtied = false;
    this->bIsInDownOnGroundPose = false;
    this->bIsPagerSnatched = false;
    this->bIsScramblerSignalScanSkillActive = false;
    this->bHasGuardBehavior = false;
    this->bIsHogTiedOnce = false;
    this->LastTieHandsInstigatorPlayerState = NULL;
    this->PagerData = NULL;
    this->PagerTriggeredCount = 0;
    this->PagerSnatchedInteractor = NULL;
    this->NavQueryFilterOverride = NULL;
    this->ValidTargetDefeatStates = 7;
    this->bCanShootDownedIfFired = true;
    this->HackedGameplayEffectClass = NULL;
    this->AttachedLoot = NULL;
    this->CurrentLifeActionTriggerVolume = NULL;
    this->LocallyDamagedByPlayer = NULL;
    this->PendingMeleeDownOnGoundInstigator = NULL;
    this->SurrenderInstigatorPlayerState = NULL;
    this->VariationCategory = ESBZAICharacterVariationCategory::Default;
    this->MarkSpecials = TEXT("mark-specials");
    this->MarkEnemy = TEXT("mark-enemy");
    this->StatisticsMarkEnemyCamera = TEXT("mark-enemy-camera");
    this->StatisticsMarkEnemyMicroCamera = TEXT("mark-enemy-micro-camera");
    this->bCanBeSeenByThermalScope = true;
    this->KillInstigatorController = NULL;
}

ASBZCarriedStaticInteractionActor* ASBZAICharacter::SpawnLootOnCharacter(TSubclassOf<ASBZCarriedStaticInteractionActor> ClassTOSpawn) {
    return NULL;
}

void ASBZAICharacter::SetStartRoomLabel() {
}

void ASBZAICharacter::RemoveMarkerFromAsObjective() {
}

void ASBZAICharacter::OnStartInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICharacter::OnServerStartInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICharacter::OnServerEndInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICharacter::OnServerECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) {
}

void ASBZAICharacter::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICharacter::OnRep_VariationCategory() {
}

void ASBZAICharacter::OnRep_TelegraphAttack() {
}

void ASBZAICharacter::OnRep_IsSurrendered() {
}

void ASBZAICharacter::OnRep_HostageState(uint8 OldHostageState) {
}

void ASBZAICharacter::OnRep_BehaviorCategory() {
}

void ASBZAICharacter::OnRep_AsObjectiveState() {
}

void ASBZAICharacter::OnPredictedEndInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICharacter::OnPredictedAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICharacter::OnNegotiationTradeTypeChanged(ESBZNegotiationTradeType OldType, ESBZNegotiationTradeType NewType) {
}

void ASBZAICharacter::OnEndInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICharacter::OnAttachedLootTaken(USBZBaseInteractableComponent* BaseInteractable, USBZInteractorComponent* InInteractor, bool bIsLocallyControlledInteractor) {
}

void ASBZAICharacter::OnAckRejectedPredictedInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICharacter::OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICharacter::OnAckAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICharacter::Multicast_Surrender_Implementation() {
}

void ASBZAICharacter::Multicast_StopRoomScanning_Implementation(ESBZRoomScanningType RoomScanningType) {
}

void ASBZAICharacter::Multicast_SetVariationCategory_Implementation(ESBZAICharacterVariationCategory Category) {
}

void ASBZAICharacter::Multicast_SetHacked_Implementation(float Duration) {
}

void ASBZAICharacter::Multicast_SetBehaviorCategory_Implementation(ESBZAIBehaviorCategory RepCategory) {
}

void ASBZAICharacter::Multicast_SetAsObjectiveState_Implementation(uint8 NewAsObjectiveState) {
}

void ASBZAICharacter::Multicast_RoomScanning_Implementation(ESBZRoomScanningType RoomScanningType, int32 AnimationIndex) {
}

void ASBZAICharacter::Multicast_HostageState_Implementation(uint8 InHostageState) {
}

void ASBZAICharacter::Multicast_DropAttachedLoot_Implementation() {
}

void ASBZAICharacter::EnableAsObjective(bool bImmediately, float Distance) {
}

void ASBZAICharacter::DisableAsObjective() {
}

void ASBZAICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAICharacter, HostageState);
    DOREPLIFETIME(ASBZAICharacter, bIsSurrendered);
    DOREPLIFETIME(ASBZAICharacter, CurrentBehaviorCategory);
    DOREPLIFETIME(ASBZAICharacter, EquipmentData);
    DOREPLIFETIME(ASBZAICharacter, AsObjectiveState);
    DOREPLIFETIME(ASBZAICharacter, VariationData);
    DOREPLIFETIME(ASBZAICharacter, VariationCategoryIndexIntervals);
    DOREPLIFETIME(ASBZAICharacter, bTelegraphAttack);
    DOREPLIFETIME(ASBZAICharacter, VariationCategory);
}


