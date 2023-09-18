#include "SBZAnimNode_CurveMatchedSequencePlayer.h"

FSBZAnimNode_CurveMatchedSequencePlayer::FSBZAnimNode_CurveMatchedSequencePlayer() {
    this->Sequence = NULL;
    this->CurveTarget = 0.00f;
    this->bAutoPlay = false;
    this->PreviousSequence = NULL;
}

