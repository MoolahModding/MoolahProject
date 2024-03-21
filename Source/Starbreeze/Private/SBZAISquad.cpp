#include "SBZAISquad.h"

void USBZAISquad::OnMemberKilled(APawn* KilledMember) {
}

USBZAISquad::USBZAISquad() {
    this->CurrentOrder = NULL;
    this->MostNavRestrictedMember = NULL;
    this->MostRestrictedNQF = NULL;
}

