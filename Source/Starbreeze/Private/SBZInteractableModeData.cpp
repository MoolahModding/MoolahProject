#include "SBZInteractableModeData.h"

FSBZInteractableModeData::FSBZInteractableModeData() {
    this->Duration = 0.00f;
    this->bIsInputConsumed = false;
    this->bDistanceBreaksInteraction = false;
    this->bIsAllowedInCasing = false;
    this->bIsSignalInteract = false;
    this->bIsIllegal = false;
    this->Priority = 0;
    this->AnimatedInteractionData = NULL;
    this->OnStart2DAudioEvent = NULL;
    this->OnStart3DAudioEvent = NULL;
    this->OnFinish2DAudioEvent = NULL;
    this->OnFinish3DAudioEvent = NULL;
    this->OnCancel2DAudioEvent = NULL;
    this->OnCancel3DAudioEvent = NULL;
    this->StartComment = NULL;
    this->CompletedComment = NULL;
    this->CancelComment = NULL;
}

