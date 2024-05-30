#include "SBZBTTask_PlayLifeAction.h"

USBZBTTask_PlayLifeAction::USBZBTTask_PlayLifeAction() {
    this->NodeName = TEXT("SBZ Play Life Action");
    this->UtilityScore = 1.00f;
    this->bIsPersistant = false;
    this->CompatibleStances = 1;
    this->AllowedHeistStates = 65535;
    this->Behavior = NULL;
}


