#include "SBZNarrator.h"
#include "SBZCharacterVoiceComponent.h"

ASBZNarrator::ASBZNarrator() {
    this->VoiceComponent = CreateDefaultSubobject<USBZCharacterVoiceComponent>(TEXT("SBZCharacterVoiceComponent"));
}

