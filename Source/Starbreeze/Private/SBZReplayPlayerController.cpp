#include "SBZReplayPlayerController.h"

USBZReplayManager* ASBZReplayPlayerController::GetReplayManager() const {
    return NULL;
}

ASBZReplayPlayerController::ASBZReplayPlayerController() {
    this->ReplayManager = NULL;
    this->ReplayWidget = NULL;
}

