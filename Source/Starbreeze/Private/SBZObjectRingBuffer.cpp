#include "SBZObjectRingBuffer.h"

USBZObjectRingBuffer::USBZObjectRingBuffer() {
    this->Objects.AddDefaulted(1);
    this->bKeepSorted = true;
    this->HeadIndex = -1;
    this->DroppedElementContainer = NULL;
}


