#include "SBZAIStimuliReactionComponent.h"

USBZAIStimuliReactionComponent::USBZAIStimuliReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EscalationOrder = NULL;
    this->ReasonAssets[0] = NULL;
    this->ReasonAssets[1] = NULL;
    this->ReasonAssets[2] = NULL;
    this->ReasonAssets[3] = NULL;
    this->ReasonAssets[4] = NULL;
    this->ReasonAssets[5] = NULL;
    this->ReasonAssets[6] = NULL;
    this->ReasonAssets[7] = NULL;
    this->ReasonAssets[8] = NULL;
    this->ReasonAssets[9] = NULL;
    this->ReasonAssets[10] = NULL;
    this->ReasonAssets[11] = NULL;
    this->ReasonAssets[12] = NULL;
    this->ReasonAssets[13] = NULL;
    this->ReasonAssets[14] = NULL;
    this->ReasonAssets[15] = NULL;
}

void USBZAIStimuliReactionComponent::HandleStimuli(AActor* Actor, FAIStimulus Stimulus) {
}


