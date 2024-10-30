#include "SBZAkAcousticPortal.h"

ASBZAkAcousticPortal::ASBZAkAcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugScreenTimer = 10.00f;
    this->StateOpenDelay = 0.00f;
    this->StateCloseDelay = 0.00f;
    this->bAllowStateChange = true;
}

void ASBZAkAcousticPortal::OnDebugLogging() {
}

void ASBZAkAcousticPortal::OnActivateTick(bool bTick) {
}


