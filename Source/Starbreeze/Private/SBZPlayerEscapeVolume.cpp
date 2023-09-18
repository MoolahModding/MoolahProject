#include "SBZPlayerEscapeVolume.h"

ASBZPlayerEscapeVolume::ASBZPlayerEscapeVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EscapeTimeDuration = 3.00f;
    this->bDisableWhenEscapeTimeIsComplete = true;
    this->bShouldStartEnabled = false;
    this->bDisableWhenPlayerBeginsOverlapping = false;
}


