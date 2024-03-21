#include "SBZAIBaseCharacter.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIAbilitySystemComponent.h"
#include "SBZAICharacterAttributeSet.h"
#include "SBZAIInteractorComponent.h"
#include "SBZApplyMarkedTagEffect.h"

void ASBZAIBaseCharacter::OnRep_AgentId() {
}

void ASBZAIBaseCharacter::OnMontageStarted(UAnimMontage* Montage) {
}

void ASBZAIBaseCharacter::Multicast_Unmark_Implementation(float InMarkedDuration) {
}

void ASBZAIBaseCharacter::Multicast_StopWarpedRootMotionMontage_Implementation(UAnimMontage* Montage, bool bCanPlayExit) {
}

void ASBZAIBaseCharacter::Multicast_StopEvade_Implementation() {
}

void ASBZAIBaseCharacter::Multicast_StopAgilityMontage_Implementation(UAnimMontage* Montage) {
}

void ASBZAIBaseCharacter::Multicast_SetCurrentTarget_Implementation(AActor* NewTarget) {
}

void ASBZAIBaseCharacter::Multicast_PlayWarpedRootMotionMontage_Implementation(UAnimMontage* Montage, const TArray<FTransform>& WarpingTransforms) {
}

void ASBZAIBaseCharacter::Multicast_PlayAgilityMontage_Implementation(UAnimMontage* Montage, const TArray<FTransform>& WarpingTransforms, ESBZAgilityType AgilityType, const TArray<FSBZAgilityTrajectoryPoint>& TrajectoryPoints) {
}

void ASBZAIBaseCharacter::Multicast_PlaceObjectCosmetics_Implementation(UAnimMontage* Montage) {
}

void ASBZAIBaseCharacter::Multicast_Evade_Implementation(ESBZEvadeType EvadeType, UAnimMontage* Montage) {
}

float ASBZAIBaseCharacter::GetTimeSinceLastAgility() const {
    return 0.0f;
}

void ASBZAIBaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAIBaseCharacter, RemoteDesiredHeadYaw);
    DOREPLIFETIME(ASBZAIBaseCharacter, CurrentTarget);
    DOREPLIFETIME(ASBZAIBaseCharacter, AgentId);
}

ASBZAIBaseCharacter::ASBZAIBaseCharacter(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CombatUtilityData = NULL;
    this->NavFilters[0] = NULL;
    this->NavFilters[1] = NULL;
    this->NavFilters[2] = NULL;
    this->NavFilters[3] = NULL;
    this->AbilitySystemComponent = CreateDefaultSubobject<USBZAIAbilitySystemComponent>(TEXT("SBZAbilitySystemComponent"));
    this->AttributeSetClass = USBZAICharacterAttributeSet::StaticClass();
    this->AttributeSet = NULL;
    this->RemoteDesiredViewYaw = 0;
    this->RemoteDesiredHeadYaw = 0;
    this->UtilityData = NULL;
    this->CurrentTarget = NULL;
    this->AgilityQueryParam = NULL;
    this->CurrentNavLinkAgilityComponent = NULL;
    this->StimuliReactionComponent = NULL;
    this->bCanEverDoIdleBreaker = true;
    this->AIInteractorComponent = CreateDefaultSubobject<USBZAIInteractorComponent>(TEXT("SBZAIInteractorComponent"));
    this->PlacementComment = NULL;
    this->CurrentRappellingRope = NULL;
    this->LastWarpedRootMotionMontage = NULL;
    this->CurVehicleObstacle = NULL;
    this->CurVehicleHit = NULL;
    this->AllowedStanceTransitionData = NULL;
    this->AgentManager = NULL;
    this->DeadlyFallHeight = 700.00f;
    this->PathFocusSettings = NULL;
    this->AgentId = 0;
    this->AgentCharacterMovement = NULL;
    this->NeighbourDetectionRange = 200.00f;
    this->bIsAvoidanceEnabled = true;
    this->PlayingAgilityMontage = NULL;
    this->bCanDoEvadeDuringPathing = true;
    this->bCanDoEvades = true;
    this->MarkedGameplayEffectClass = USBZApplyMarkedTagEffect::StaticClass();
    this->AdditiveBaseEyeHeightTickRate = 0.10f;
}

