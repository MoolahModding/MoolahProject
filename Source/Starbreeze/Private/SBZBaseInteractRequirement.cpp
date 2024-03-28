#include "SBZBaseInteractRequirement.h"

bool USBZBaseInteractRequirement::BP_CheckRequirement_Implementation(const USBZInteractorComponent* Interactor, FSBZInteractReqData& OutData, bool bIsSignalRequired, bool bInIsScreenInteract, bool bIsCasing) const {
    return false;
}

USBZBaseInteractRequirement::USBZBaseInteractRequirement() {
}

