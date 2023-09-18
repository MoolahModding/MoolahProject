#include "SBZReplayPlayerController.h"

ASBZReplayPlayerController::ASBZReplayPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReplayManager = NULL;
    this->ReplayWidget = NULL;
    this->ClickEventKeys.AddDefaulted(1);
}

USBZReplayManager* ASBZReplayPlayerController::GetReplayManager() const {
    return NULL;
}


