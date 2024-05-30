#include "SBZAITaserBattery.h"
#include "ESBZAIWeakPointType.h"

USBZAITaserBattery::USBZAITaserBattery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeakPointType = ESBZAIWeakPointType::TaserBattery;
    this->TaseDuration = 10.00f;
}


