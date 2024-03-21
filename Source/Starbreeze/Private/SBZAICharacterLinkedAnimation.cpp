#include "SBZAICharacterLinkedAnimation.h"

USBZAICharacterLinkedAnimation::USBZAICharacterLinkedAnimation() {
    this->bIsDownOnGround = false;
    this->bIsDownOnGroundPanic = false;
    this->DownOnGroundIdle = NULL;
    this->EnterDownOnGroundIdlePanic = NULL;
    this->DownOnGroundIdlePanic = NULL;
    this->ExitDownOnGroundIdlePanic = NULL;
    this->AICharacter = NULL;
}

