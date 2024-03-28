#include "SBZAIDrone.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIDroneAttributeSet.h"
#include "SBZAbilitySystemComponent.h"
#include "SBZCharacterVoiceComponent.h"
#include "SBZHackableInteractableComponent.h"
#include "SBZOutlineComponent.h"
#include "SBZShoutTargetComponent.h"

void ASBZAIDrone::OnServerAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}



void ASBZAIDrone::OnRep_RuntimeState() {
}

void ASBZAIDrone::OnPredictedAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZAIDrone::OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) {
}

void ASBZAIDrone::OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZAIDrone::OnAckAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZAIDrone::Multicast_SetRuntimed_Implementation(ESBZRuntimeState InRuntimeState) {
}

void ASBZAIDrone::Multicast_SetCurrentTarget_Implementation(AActor* NewTarget) {
}

void ASBZAIDrone::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZAIDrone::Multicast_RemoveRuntime_Implementation(ESBZRuntimeState InRuntimeToRemove) {
}

void ASBZAIDrone::Multicast_OnKill_Implementation() {
}


void ASBZAIDrone::AddForce(const FVector& LinearForce) {
}

void ASBZAIDrone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAIDrone, TeamId);
    DOREPLIFETIME(ASBZAIDrone, RuntimeState);
    DOREPLIFETIME(ASBZAIDrone, MoveUpVector);
    DOREPLIFETIME(ASBZAIDrone, CurrentTarget);
}

ASBZAIDrone::ASBZAIDrone() {
    this->AttributeSet = CreateDefaultSubobject<USBZAIDroneAttributeSet>(TEXT("SBZAIDroneAttributeSet"));
    this->DestroyedEffect = NULL;
    this->DestroyedEvent = NULL;
    this->AbilitySystemComponent = CreateDefaultSubobject<USBZAbilitySystemComponent>(TEXT("SBZAbilitySystemComponent"));
    this->AbilityData = NULL;
    this->AIVisibilityNodeComputationFrequency = ESBZAIVisibilityNodeComputationFrequency::Automatic;
    this->VoiceComponent = CreateDefaultSubobject<USBZCharacterVoiceComponent>(TEXT("SBZCharacterVoiceComponent"));
    this->StimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->ShoutTarget = CreateDefaultSubobject<USBZShoutTargetComponent>(TEXT("SBZShoutTargetComponent"));
    this->RangedWeapon = NULL;
    this->HackableInteractable = CreateDefaultSubobject<USBZHackableInteractableComponent>(TEXT("SBZHackableInteractableComponent"));
    this->RuntimeState = 0;
    this->PlayerExplosionRange = 300.00f;
    this->AIExplosionRange = 500.00f;
    this->EMPEffectClass = NULL;
    this->EMPExplodedEvent = NULL;
    this->EMPDetonationEffect = NULL;
    this->EMPStunDuration = 10.00f;
    this->RuntimedComment = NULL;
    this->FireWeaponComment = NULL;
    this->ExplosionInstigator = NULL;
    this->CurrentTarget = NULL;
    this->StatisticsMarkDrone = TEXT("mark-drone");
}

