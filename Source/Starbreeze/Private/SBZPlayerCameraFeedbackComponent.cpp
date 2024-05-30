#include "SBZPlayerCameraFeedbackComponent.h"
#include "Templates/SubclassOf.h"

USBZPlayerCameraFeedbackComponent::USBZPlayerCameraFeedbackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraOwner = NULL;
}

bool USBZPlayerCameraFeedbackComponent::SetFeedbackIntensity(int32 FeedbackID, float InIntensity) {
    return false;
}

bool USBZPlayerCameraFeedbackComponent::RemoveFeedback(int32 RemoveID) {
    return false;
}

void USBZPlayerCameraFeedbackComponent::OnExitedActionPhase() {
}

USBZPlayerCameraFeedbackComponent* USBZPlayerCameraFeedbackComponent::GetLocalCameraFeedbackComponent(UObject* WorldContextObject) {
    return NULL;
}

bool USBZPlayerCameraFeedbackComponent::FadeOutFeedback(int32 RemoveID, bool bIsAutoRemoved) {
    return false;
}

void USBZPlayerCameraFeedbackComponent::CooldownTimerDelegate(TSubclassOf<USBZLocalPlayerFeedback> FeedbackClass) {
}

int32 USBZPlayerCameraFeedbackComponent::AddFeedback(FSBZLocalPlayerFeedbackParameters& Parameters) {
    return 0;
}


