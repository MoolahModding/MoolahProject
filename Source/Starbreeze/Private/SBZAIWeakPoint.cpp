#include "SBZAIWeakPoint.h"

void USBZAIWeakPoint::Multicast_OnWeakPointDestroyed_Implementation() {
}

USBZAIWeakPoint::USBZAIWeakPoint() {
    this->WeakPointHealth[0] = 0.00f;
    this->WeakPointHealth[1] = 0.00f;
    this->WeakPointHealth[2] = 0.00f;
    this->WeakPointHealth[3] = 0.00f;
    this->DestroyedEffect = NULL;
    this->DestroyedEvent = NULL;
    this->WeakPointAttributeSet = NULL;
    this->DestroyedInstigator = NULL;
    this->WeakPointType = ESBZAIWeakPointType::None;
}

