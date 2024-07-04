#include "SBZDozerFaceArmor.h"

USBZDozerFaceArmor::USBZDozerFaceArmor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->BreakEvent = NULL;
    this->BreakVFX = NULL;
    this->BreakComment = NULL;
    this->bCarryOnBreak = false;
}


