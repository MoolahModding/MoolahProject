#include "SBZArmedPawn.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAbilitySystemComponent.h"
#include "SBZApplyMarkedTagEffect.h"
#include "SBZOutlineComponent.h"

ASBZArmedPawn::ASBZArmedPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystemComponent = CreateDefaultSubobject<USBZAbilitySystemComponent>(TEXT("SBZAbilitySystemComponent"));
    this->AbilityData = NULL;
    this->AIVisibilityNodeComputationFrequency = ESBZAIVisibilityNodeComputationFrequency::Automatic;
    this->StimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->RangedWeapon = NULL;
    this->MarkedGameplayEffectClass = USBZApplyMarkedTagEffect::StaticClass();
    this->bIsDeathAllowed = true;
}

void ASBZArmedPawn::Multicast_PredictedRagdollDenied_Implementation(int32 HurtReactionIndex) {
}

void ASBZArmedPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZArmedPawn, TeamId);
}

UAbilitySystemComponent* ASBZArmedPawn::GetAbilitySystemComponent() const
{
    return nullptr;
}


