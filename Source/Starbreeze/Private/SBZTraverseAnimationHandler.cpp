#include "SBZTraverseAnimationHandler.h"

FSBZTraverseAnimationHandler::FSBZTraverseAnimationHandler() {
    this->bStart = false;
    this->bTraverse = false;
    this->bExitTraverse = false;
    this->bLand = false;
    this->bFall = false;
    this->bEndsInFalling = false;
    this->bIsPlaying = false;
    this->bMantle = false;
    this->VerticalDistToFrontEdge = 0.00f;
    this->VerticalDistFromBackEdge = 0.00f;
    this->ExitTraverseTime = 0.00f;
    this->StartAnim = NULL;
    this->ExitTraverseAnim = NULL;
    this->LandAnim = NULL;
    this->EndMontage = NULL;
}

