#include "SBZBTTask_FindLifeActionWithTag.h"

USBZBTTask_FindLifeActionWithTag::USBZBTTask_FindLifeActionWithTag() {
    this->UtilityScore = 0.70f;
    this->bIsPersistant = false;
    this->CompatibleStances = 1;
    this->AllowedHeistStates = -1;
    this->Behavior = NULL;
    this->LifeActionAffinityData = NULL;
    this->NodeName = TEXT("SBZ Find Life Action With tag");
}


