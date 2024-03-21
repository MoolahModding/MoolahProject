#include "SBZAIAttractorDestruction.h"
#include "SBZAIAttractorComponent.h"
#include "SBZPropDamageComponent.h"

ASBZAIAttractorDestruction::ASBZAIAttractorDestruction() {
    this->PropDamage = CreateDefaultSubobject<USBZPropDamageComponent>(TEXT("SBZPropDamageComponent"));
    this->SoundRange = 1500.00f;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
}

