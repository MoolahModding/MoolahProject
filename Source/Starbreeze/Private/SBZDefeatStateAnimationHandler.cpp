#include "SBZDefeatStateAnimationHandler.h"

FSBZDefeatStateAnimationHandler::FSBZDefeatStateAnimationHandler() {
    this->IdleSubdued = NULL;
    this->IdleDowned = NULL;
    this->IdleBleedOut = NULL;
    this->DownedAimOffset = NULL;
    this->bDefeated = false;
    this->bSubdued = false;
    this->bDowned = false;
    this->bBleedOut = false;
}

