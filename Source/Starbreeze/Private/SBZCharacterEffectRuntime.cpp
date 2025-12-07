#include "SBZCharacterEffectRuntime.h"

FSBZCharacterEffectRuntime::FSBZCharacterEffectRuntime() {
    this->CharacterEffectData = NULL;
    this->CurrentProgress = 0.00f;
    this->CharacterEffectValue = 0.00f;
    this->CooldownAnimationTime = 0.00f;
    this->CooldownTimer = 0.00f;
    this->bHidesWhenActive = false;
    this->bIsAutoRemove = false;
    this->MinFractionalDigitCount = 0;
    this->MaxFractionalDigitCount = 0;
}

