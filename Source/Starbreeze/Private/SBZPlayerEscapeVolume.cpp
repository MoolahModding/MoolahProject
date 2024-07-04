#include "SBZPlayerEscapeVolume.h"

ASBZPlayerEscapeVolume::ASBZPlayerEscapeVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldStartEnabled = false;
    this->bDisableWhenPlayerBeginsOverlapping = false;
    this->EscapeTimeDuration = 3.00f;
    this->bDisableWhenEscapeTimeIsComplete = true;
}


