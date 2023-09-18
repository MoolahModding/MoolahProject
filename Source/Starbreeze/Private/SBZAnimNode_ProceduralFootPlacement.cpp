#include "SBZAnimNode_ProceduralFootPlacement.h"

FSBZAnimNode_ProceduralFootPlacement::FSBZAnimNode_ProceduralFootPlacement() {
    this->bNewRendered = false;
    this->SpineAdjustmentAlpha = 0.00f;
    this->MaxFloorPitchForSpine = 0.00f;
    this->MaxFloorRollForSpine = 0.00f;
    this->FootRotationInterpSpeed = 0.00f;
    this->DeltaYaw = 0.00f;
    this->MinFootZOffsetInterSpeed = 0.00f;
    this->ImpactZInterSpeedFactor = 0.00f;
    this->AnkleAdjustmentAlpha = 0.00f;
    this->MaxFootLiftZDist = 0.00f;
    this->AnklePitchAxis = EAxis::None;
    this->PelvisMinHeight = 0.00f;
    this->PelvisInterpSpeed = 0.00f;
    this->PelvisHigherHeightInterpSpeedModifier = 0.00f;
    this->MinZDistToPelvis = 0.00f;
    this->CharacterSpeed = 0.00f;
    this->RootSpeedMultiplier = 0.00f;
}

