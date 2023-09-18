#include "SBZAISearchManager.h"

USBZAISearchManager::USBZAISearchManager() {
    this->InvestigateOrder = NULL;
    this->InvestigateOrder = NULL;
    this->MaximumSearchSquadSize = 4;
    this->SearchOrder = NULL;
    this->SearchOrder = NULL;
    this->PercentageEvacutingCivilians = 0.80f;
    this->NumInvestigateUpdatesBeforeArrest = 2;
    this->CivilianEvacuateOrder = NULL;
    this->SearchOriginRoom = NULL;
}

void USBZAISearchManager::OnInvestigationCompleted(USBZAIOrder* Order, APawn* Pawn, TEnumAsByte<EBTNodeResult::Type> Result) {
}

void USBZAISearchManager::OnHeistStateChanged(EPD3HeistState OldHeistState, EPD3HeistState NewHeistState) {
}

bool USBZAISearchManager::Investigate(const UObject* WorldContextObject, const FSBZInvestigationRequest& Request) {
    return false;
}

bool USBZAISearchManager::HasPendingInvestigationFor(AActor* Target) const {
    return false;
}

USBZAISearchManager* USBZAISearchManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


