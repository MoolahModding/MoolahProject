#include "SBZAIOrder_LifeAction.h"
#include "ESBZAIOrderMode.h"

USBZAIOrder_LifeAction::USBZAIOrder_LifeAction() {
    this->Mode = ESBZAIOrderMode::Instant;
    this->Category = ESBZAIBehaviorCategory::Idle;
    this->bCompleteOnStop = true;
    this->CompatibleStances = 1;
    this->AllowedHeistStates = -1;
    this->CompleteOrderForResults = -1;
    this->bUseRequestOnlyOnce = true;
    this->bShouldRemovePersistenceAfterLA = false;
    this->bWaitForEquipped = false;
    this->ReservedSlot = NULL;
    this->LifeActionComponent = NULL;
    this->BlockingSlot = NULL;
}

void USBZAIOrder_LifeAction::OnCharacterSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void USBZAIOrder_LifeAction::OnBlockingSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void USBZAIOrder_LifeAction::OnBehaviorCategoryChanged(ESBZAIBehaviorCategory OldCategory, ESBZAIBehaviorCategory NewCategory) {
}

void USBZAIOrder_LifeAction::ClearDelegates() {
}


