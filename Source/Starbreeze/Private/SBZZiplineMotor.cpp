#include "SBZZiplineMotor.h"
#include "SBZCableComponent.h"

ASBZZiplineMotor::ASBZZiplineMotor() {
    this->AheadOffsetFromZipLiner = 180.00f;
    this->VerticalAheadOffsetFromZipLiner = 150.00f;
    this->CableComponent = CreateDefaultSubobject<USBZCableComponent>(TEXT("SBZCableComponent"));
}

