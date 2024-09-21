#include "SBZAICloakerMeleeAbility.h"
#include "ESBZAbilityInput.h"

USBZAICloakerMeleeAbility::USBZAICloakerMeleeAbility() {
    this->Input = ESBZAbilityInput::Fire;
    this->HitAcceptanceRadius = 80.00f;
    this->TauntDuringAssault = NULL;
    this->CloakerTakedown = NULL;
    this->OutlineAsset = NULL;
    this->CloakerTarget = NULL;
    this->RegisteredPlayerState = NULL;
    this->AICharacter = NULL;
    this->CurrentMeleeMontage = NULL;
    this->CurrentBeatOnGroundMontage = NULL;
}


