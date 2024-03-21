#include "SBZObjectRingBuffer.h"

USBZObjectRingBuffer::USBZObjectRingBuffer() {
    this->HeadIndex = -1;
    this->DroppedElementContainer = NULL;
}

