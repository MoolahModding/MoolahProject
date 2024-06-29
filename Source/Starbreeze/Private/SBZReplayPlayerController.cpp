#include "SBZReplayPlayerController.h"

ASBZReplayPlayerController::ASBZReplayPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->ReplayManager = NULL;
    this->ReplayWidget = NULL;
}

USBZReplayManager* ASBZReplayPlayerController::GetReplayManager() const {
    return NULL;
}


