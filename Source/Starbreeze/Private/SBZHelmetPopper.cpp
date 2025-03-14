#include "SBZHelmetPopper.h"

USBZHelmetPopper::USBZHelmetPopper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HelmetPopperData = NULL;
    this->PopEffect = NULL;
    this->MaxAttackDirDotVFX = 0.00f;
    this->MaxAttackDirDotDMG = 0.00f;
    this->CPDIndex = 22;
    this->CPDValue = ESBZVariationValue::A;
}


