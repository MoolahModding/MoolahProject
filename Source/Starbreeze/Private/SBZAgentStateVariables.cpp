#include "SBZAgentStateVariables.h"

FSBZAgentStateVariables::FSBZAgentStateVariables() {
    this->MontageHash = 0;
    this->MaxSpeed = 0;
    this->Yaw = 0;
    this->RemoteViewYaw = 0;
    this->RemoteDesiredViewYaw = 0;
    this->MovementMode = ESBZMovementMode::None;
    this->CharacterMovementState = ESBZCharacterMovementState::Walking;
    this->TurnDirection = ESBZTurnDirection::None;
    this->bClearVelocity = 0;
    this->MontagePosition = 0;
    this->ReplicationGroupIndex = 0;
    this->bVelocityIsRequested = 0;
}

