#include "SBZCablePointAttachment.h"

FSBZCablePointAttachment::FSBZCablePointAttachment() {
    this->PointIndex = 0;
    this->bAutoUpdatePointIndex = false;
    this->SegmentStretchFactor = 0.00f;
    this->bRelativeToCableLength = false;
    this->bAutoWinding = false;
    this->WindingSpeed = 0.00f;
}

