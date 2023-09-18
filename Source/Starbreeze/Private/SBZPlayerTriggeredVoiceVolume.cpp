#include "SBZPlayerTriggeredVoiceVolume.h"

ASBZPlayerTriggeredVoiceVolume::ASBZPlayerTriggeredVoiceVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Dialog = NULL;
    this->Comment = NULL;
}

void ASBZPlayerTriggeredVoiceVolume::HandleDialogEnded(ESBZDialogEndedReason Reason) {
}


