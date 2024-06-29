#include "SBZReplaySpectatorPawn.h"

ASBZReplaySpectatorPawn::ASBZReplaySpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpectatorView = ESBZReplaySpectatorView::FirstPersonView;
}


