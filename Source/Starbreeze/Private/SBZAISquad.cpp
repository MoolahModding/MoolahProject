#include "SBZAISquad.h"

USBZAISquad::USBZAISquad() {
    this->CurrentOrder = NULL;
    this->MostNavRestrictedMember = NULL;
    this->MostRestrictedNQF = NULL;
}

void USBZAISquad::OnMemberKilled(APawn* KilledMember) {
}


