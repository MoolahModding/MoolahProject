#include "SBZDeltaCorrectionNotifyState.h"

USBZDeltaCorrectionNotifyState::USBZDeltaCorrectionNotifyState() {
    this->bCorrectTranslation = true;
    this->bIgnoreZAxis = false;
    this->bCorrectRotation = true;
    this->bConsiderRemainingRootMotion = false;
    this->bReplaceActorStartWorld = false;
    this->ReferenceBone = TEXT("Reference");
    this->ReferenceTime = -1.00f;
}


