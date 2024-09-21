#include "SBZAIArmedCharacterLinkedAnimation.h"

USBZAIArmedCharacterLinkedAnimation::USBZAIArmedCharacterLinkedAnimation() {
    this->bIsInCover = false;
    this->bIsEnteringCover = false;
    this->bIsAlreadyInCoverPose = false;
    this->bIsCoverAction = false;
    this->bWasCrouchBeforeCover = false;
    this->bWasInCrouchCover = false;
    this->bIsCrouching = false;
    this->bIsTurning = false;
    this->CrouchBlendingAlpha = 0.00f;
    this->CrouchToCrouchCover = NULL;
    this->CrouchToStandCover = NULL;
    this->StandToCrouchCover = NULL;
    this->StandToStandCover = NULL;
    this->CrouchCoverLoop = NULL;
    this->StandCoverLoop = NULL;
    this->CrouchCoverToCrouch = NULL;
    this->CrouchCoverToStand = NULL;
    this->StandCoverToCrouch = NULL;
    this->StandCoverToStand = NULL;
    this->StandCoverToCrouchCover = NULL;
    this->CrouchCoverToStandCover = NULL;
}


