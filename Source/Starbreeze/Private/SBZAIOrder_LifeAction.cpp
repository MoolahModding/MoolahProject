#include "SBZAIOrder_LifeAction.h"
#include "ESBZAIBehaviorCategory.h"
#include "ESBZAIOrderMode.h"

USBZAIOrder_LifeAction::USBZAIOrder_LifeAction() {
    this->CompatibleStances = 1;
    this->AllowedHeistStates = -1;
    this->CompleteOrderForResults = -1;
    this->bUseRequestOnlyOnce = true;
    this->bShouldRemovePersistenceAfterLA = false;
    this->ReservedSlot = NULL;
    this->LifeActionComponent = NULL;
    this->BlockingSlot = NULL;
    this->Mode = ESBZAIOrderMode::Instant;
    this->Category = ESBZAIBehaviorCategory::Idle;
    this->bCompleteOnStop = true;
}

void USBZAIOrder_LifeAction::OnCharacterSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void USBZAIOrder_LifeAction::OnBlockingSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void USBZAIOrder_LifeAction::ClearDelegates() {
}


