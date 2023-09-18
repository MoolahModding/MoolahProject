#include "SBZDozerFaceArmor.h"

USBZDozerFaceArmor::USBZDozerFaceArmor() {
    this->BreakEvent = NULL;
    this->BreakVFX = NULL;
    this->BreakComment = NULL;
    this->bCarryOnBreak = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->bCanEverAffectNavigation = false;
}


