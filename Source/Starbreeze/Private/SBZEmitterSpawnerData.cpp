#include "SBZEmitterSpawnerData.h"

USBZEmitterSpawnerData::USBZEmitterSpawnerData() {
    this->AttachmentRule = EAttachmentRule::KeepRelative;
    this->AutoDestroy = true;
    this->PoolingMethod = EPSCPoolMethod::None;
    this->AutoActivate = true;
}

