#include "SBZAnimNode_PoseMatchingBlendSpacePlayer.h"

FSBZAnimNode_PoseMatchingBlendSpacePlayer::FSBZAnimNode_PoseMatchingBlendSpacePlayer() {
    this->X = 0.00f;
    this->Y = 0.00f;
    this->Z = 0.00f;
    this->BlendSpace = NULL;
    this->PlayRate = 0.00f;
    this->bOnlyOnInitialize = false;
    this->bStartSearchFromCurrentTime = false;
    this->PreviousBlendSpace = NULL;
}

