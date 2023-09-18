#include "SBZBaseInteractRequirement.h"

USBZBaseInteractRequirement::USBZBaseInteractRequirement() {
}

bool USBZBaseInteractRequirement::BP_CheckRequirement_Implementation(const USBZInteractorComponent* Interactor, FSBZInteractReqData& OutData, bool bIsSignalRequired, bool bInIsScreenInteract, bool bIsCasing) const {
    return false;
}


