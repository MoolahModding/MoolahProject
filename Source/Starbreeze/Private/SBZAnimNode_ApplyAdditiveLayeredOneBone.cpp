#include "SBZAnimNode_ApplyAdditiveLayeredOneBone.h"

FSBZAnimNode_ApplyAdditiveLayeredOneBone::FSBZAnimNode_ApplyAdditiveLayeredOneBone() {
    this->Alpha = 0.00f;
    this->AlphaLayerOne = 0.00f;
    this->AlphaOthers = 0.00f;
    this->LODThreshold = 0;
    this->LODInterpolateTime = 0.00f;
    this->LODInterpolateTimer = 0.00f;
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
    this->Space = AAT_None;
}

