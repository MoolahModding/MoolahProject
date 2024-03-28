#include "SBZAIAttractorDestruction.h"
#include "SBZAIAttractorComponent.h"
#include "SBZPropDamageComponent.h"

void ASBZAIAttractorDestruction::Multicast_HandleAgilityTagEvent_Implementation(const FGameplayTag& TagEvent, ASBZAIBaseCharacter* AICharacterInstigator) {
}

ASBZAIAttractorDestruction::ASBZAIAttractorDestruction() {
    this->PropDamage = CreateDefaultSubobject<USBZPropDamageComponent>(TEXT("SBZPropDamageComponent"));
    this->SoundRange = 1500.00f;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
}

