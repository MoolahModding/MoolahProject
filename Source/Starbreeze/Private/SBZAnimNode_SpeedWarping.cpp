#include "SBZAnimNode_SpeedWarping.h"

FSBZAnimNode_SpeedWarping::FSBZAnimNode_SpeedWarping() {
    this->Space = BCS_WorldSpace;
    this->SpeedScaling = 0.00f;
    this->PelvisZOffset = 0.00f;
    this->LegsZOffset = 0.00f;
    this->PelvisLegsInterpSpeed = 0.00f;
    this->PelvisLegsAdjustmentAlpha = 0.00f;
    this->bClampIKUsingFKLeg = false;
}

