#include "SBZArmedPawn.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAbilitySystemComponent.h"
#include "SBZOutlineComponent.h"

void ASBZArmedPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZArmedPawn, TeamId);
}

ASBZArmedPawn::ASBZArmedPawn(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystemComponent = CreateDefaultSubobject<USBZAbilitySystemComponent>(TEXT("SBZAbilitySystemComponent"));
    this->AbilityData = NULL;
    this->AIVisibilityNodeComputationFrequency = ESBZAIVisibilityNodeComputationFrequency::Automatic;
    this->StimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->RangedWeapon = NULL;
}

