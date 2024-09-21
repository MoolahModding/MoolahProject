#include "SBZBTTask_BecomeAlert.h"

USBZBTTask_BecomeAlert::USBZBTTask_BecomeAlert() {
    this->NodeName = TEXT("SBZ Become Alert");
    this->Reason = EPD3DispatchCallerReason::GenericAlarm;
}


