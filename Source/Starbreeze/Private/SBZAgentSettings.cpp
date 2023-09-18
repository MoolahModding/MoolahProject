#include "SBZAgentSettings.h"

FSBZAgentSettings::FSBZAgentSettings() {
    this->MaxAcceleration = 0.00f;
    this->MaxAngularSpeed = 0.00f;
    this->Friction = 0.00f;
    this->Radius = 0.00f;
    this->TraceRadius = 0.00f;
    this->Height = 0.00f;
    this->NeighbourDetectionRange = 0.00f;
    this->bNavProjection = false;
    this->NavMeshProjectionInterval = 0.00f;
    this->NavMeshProjectionHeightScaleUp = 0.00f;
    this->NavMeshProjectionHeightScaleDown = 0.00f;
    this->MinNavMeshProjectionHeightUp = 0.00f;
    this->NavMeshProjectionInterpSpeed = 0.00f;
    this->RVOGroupMask = 0;
    this->RVOGroupsToAvoid = 0;
    this->RVOGroupsToIgnore = 0;
    this->RVOWeight = 0.00f;
    this->RVOTestRadius = 0.00f;
    this->JogSpeed = 0.00f;
}

