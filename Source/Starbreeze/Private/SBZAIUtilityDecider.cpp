#include "SBZAIUtilityDecider.h"

USBZAIUtilityDecider::USBZAIUtilityDecider() {
    this->Behavior = NULL;
    this->Category = ESBZAIBehaviorCategory::None;
    this->AIController = NULL;
    this->bEnabled = true;
    this->MaxUtility = 1.00f;
}


void USBZAIUtilityDecider::OnSelected() {
}


void USBZAIUtilityDecider::OnReselected() {
}



void USBZAIUtilityDecider::OnDeselected() {
}


void USBZAIUtilityDecider::OnDeactivated(TEnumAsByte<EBTNodeResult::Type>& NodeResult) {
}


void USBZAIUtilityDecider::OnActivated() {
}


