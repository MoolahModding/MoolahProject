#include "SBZBTDecorator_FriendlyFire.h"

USBZBTDecorator_FriendlyFire::USBZBTDecorator_FriendlyFire() {
    this->NodeName = TEXT("Has Friendly Fire");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
}


