#include "SBZObjectRingBuffer.h"

USBZObjectRingBuffer::USBZObjectRingBuffer() {
    this->HeadIndex = -1;
    this->DroppedElementContainer = NULL;
    this->Objects.AddDefaulted(1);
    this->bKeepSorted = true;
}


