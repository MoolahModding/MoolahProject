#include "SBZFootContactNotify.h"

USBZFootContactNotify::USBZFootContactNotify() {
    this->FootType = ESBZFootType::LeftFoot;
    this->bOverrideIntensity = false;
    this->FootContactIntensityOverride = ESBZFootContactIntensity::Medium;
}


