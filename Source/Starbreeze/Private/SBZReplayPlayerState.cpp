#include "SBZReplayPlayerState.h"

ASBZReplayPlayerState::ASBZReplayPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlySpectator = true;
    this->PlayerColors.AddDefaulted(4);
}


