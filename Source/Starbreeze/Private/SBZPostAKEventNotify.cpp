#include "SBZPostAKEventNotify.h"

USBZPostAKEventNotify::USBZPostAKEventNotify() {
    this->Event = NULL;
    this->ChromaSensaEffect = NULL;
    this->bFollow = false;
    this->bDistanceCulled = true;
    this->bOverrideCullingDistance = false;
    this->CullingDistance = 6000.00f;
}


