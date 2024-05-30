#include "SBZShoutTargetComponent.h"

USBZShoutTargetComponent::USBZShoutTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BasePriority = 1.00f;
    this->DistModPriority = 1.00f;
    this->bUseDirectHits = true;
    this->bRequiresVisibility = true;
    this->bRequiresOwnerAliveIfCharacter = true;
    this->Action = ESBZShoutActionType::None;
    this->CustomOutline = NULL;
    this->CustomVoice = NULL;
    this->TargetVoice = NULL;
    this->bUseCustomGesture = false;
    this->CustomGesture = ESBZPlayerGestureType::None;
    this->CustomDuration = -1.00f;
    this->bUseBoundsCenter = true;
    this->bUseAllActorOutlines = false;
    this->bEnabled = true;
}

void USBZShoutTargetComponent::SetEnabled(bool bNewValue) {
}

void USBZShoutTargetComponent::SetCustomPingMessage(FText InCustomPingMessage) {
}

void USBZShoutTargetComponent::MakeComponentsShoutTargetable(TArray<UPrimitiveComponent*> Components) {
}

void USBZShoutTargetComponent::MakeComponentShoutTargetable(UPrimitiveComponent* Component) {
}

bool USBZShoutTargetComponent::IsEnabled() const {
    return false;
}


