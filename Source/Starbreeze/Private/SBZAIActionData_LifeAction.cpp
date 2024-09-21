#include "SBZAIActionData_LifeAction.h"

USBZAIActionData_LifeAction::USBZAIActionData_LifeAction() {
    this->bUseRequestOnlyOnce = false;
    this->CompatibleStances = 1;
    this->AllowedHeistStates = -1;
    this->UtilityScore = 0.10f;
    this->ExecutionMode = ESBZLifeActionDataExecutionMode::None;
    this->bOverrideBehavior = false;
    this->Behavior = NULL;
    this->bOverrideIsPersistent = false;
    this->bIsPersistent = false;
    this->CompleteOrderForResults = -1;
}


