#include "SBZBTTask_Peek.h"

USBZBTTask_Peek::USBZBTTask_Peek() {
    this->NodeName = TEXT("Peek");
    this->DotAnglePeek = -0.50f;
    this->MoveForwardAmount = 50.00f;
    this->MoveSidewaysAmount = 50.00f;
    this->AdditionalStepOutDistance = 0.00f;
    this->bShouldCareAboutNeighbors = true;
    this->StandingWeight = 2.00f;
}


