#include "SBZAIVisualDetectionComponent.h"

void USBZAIVisualDetectionComponent::OnTargetIllegalAction(AActor* Target) {
}

void USBZAIVisualDetectionComponent::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void USBZAIVisualDetectionComponent::OnLifetimeChanged(APawn* TargetPawn) {
}

void USBZAIVisualDetectionComponent::OnHostageStateChanged(uint8 HostageState) {
}

void USBZAIVisualDetectionComponent::OnGameStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void USBZAIVisualDetectionComponent::HandleOnNewPawn(APawn* Pawn) {
}

USBZAIVisualDetectionComponent::USBZAIVisualDetectionComponent() {
    this->VisionDegradeSpeed = 0.40f;
    this->VisionDegradeDelay = 0.20f;
    this->bMarkAsCriminalOnSearch = true;
    this->bShouldDisplayDetectionBuildup = true;
    this->IllegalActionGracePeriod = 0.50f;
    this->MaxLagCompensation = 0.50f;
    this->bOnlyDetectMovement = false;
    this->bShouldPauseDetectionOnCriminal = true;
}

