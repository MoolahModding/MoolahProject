#include "SBZBTTask_BecomeAlert.h"

USBZBTTask_BecomeAlert::USBZBTTask_BecomeAlert() {
    this->Reason = EPD3DispatchCallerReason::GenericAlarm;
    this->NodeName = TEXT("SBZ Become Alert");
}


