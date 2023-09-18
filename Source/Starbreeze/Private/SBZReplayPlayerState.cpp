#include "SBZReplayPlayerState.h"

ASBZReplayPlayerState::ASBZReplayPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerColors.AddDefaulted(4);
    this->bOnlySpectator = true;
}


