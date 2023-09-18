#include "SBZBTTask_Evade.h"

USBZBTTask_Evade::USBZBTTask_Evade() {
    this->FilterClass = NULL;
    this->FilterClass = NULL;
    this->NeededTimeSinceFireToEvade = 0.50f;
    this->FastEvadeCoolDown = 0.50f;
    this->SlowEvadeCoolDown = 0.50f;
    this->MinFireDist = 300.00f;
    this->MinSlowEvadeDist = 600.00f;
    this->MinFastEvadeDist = 200.00f;
    this->NodeName = TEXT("Evade");
}


