#include "SBZBTTask_RunRepositionBehavior.h"

USBZBTTask_RunRepositionBehavior::USBZBTTask_RunRepositionBehavior() {
    this->NodeName = TEXT("SBZ Run Reposition Behavior");
    this->EnemyMovedFarDist = 350.00f;
    this->TickRate = 3.00f;
    this->InitialTickRate = 0.50f;
}


