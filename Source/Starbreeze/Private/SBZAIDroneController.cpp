#include "SBZAIDroneController.h"

ASBZAIDroneController::ASBZAIDroneController() {
    this->BlackboardAsset = NULL;
    this->BehaviorTree = NULL;
    this->DespawnBehaviorTree = NULL;
    this->FailedTasksUntilDespawn = 3;
}

