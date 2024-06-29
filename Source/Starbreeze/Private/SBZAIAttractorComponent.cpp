#include "SBZAIAttractorComponent.h"
#include "Perception/AISense_Sight.h"
#include "SBZAttractorPredicate_IsPerceived.h"

USBZAIAttractorComponent::USBZAIAttractorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultSense = UAISense_Sight::StaticClass();
    this->MaxHeistStateToBeEnabled = EPD3HeistState::PointOfNoReturn;
    this->AttractorDataAssetDefault = NULL;
    this->AttractorDataAsset = NULL;
    this->Priority = ESBZAIAttractorPriority::VeryLow;
    this->Radius = 800.00f;
    this->bUseMaxConcurrentUsers = true;
    this->MaxConcurrentUsers = 1;
    this->MaxUses = 1;
    this->bDestroyOnComplete = false;
    this->bIsReusable = false;
    this->AttractorPredicate = USBZAttractorPredicate_IsPerceived::StaticClass();
    this->StealthAttractorPredicate = USBZAttractorPredicate_IsPerceived::StaticClass();
    this->AttractorInstigator = NULL;
    this->bIsEnabledAfteSearch = true;
    this->bIsEnabled = false;
}

void USBZAIAttractorComponent::UnregisterFromPerceptionSystem() {
}

bool USBZAIAttractorComponent::SetEnabled(bool bEnabled) {
    return false;
}

void USBZAIAttractorComponent::SetAttractorInstigator(APawn* Instigator) {
}

void USBZAIAttractorComponent::RegisterWithPerceptionSystem() {
}

void USBZAIAttractorComponent::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}


