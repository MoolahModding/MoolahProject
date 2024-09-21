#include "SBZAIAction_TouchReaction.h"

USBZAIAction_TouchReaction::USBZAIAction_TouchReaction() {
    this->PrivateVoiceComment = NULL;
    this->PublicVoiceComment = NULL;
    this->ResumeVoiceComment = NULL;
    this->VoicePriority = ESBZVoicePriority::MediumPriority;
    this->Escalation = NULL;
    this->TargetPlayerState = NULL;
}

void USBZAIAction_TouchReaction::OnTargetDefeatStateChanged(ASBZPlayerState* InSBZPlayerState, EPD3DefeatState OldDefeatState, EPD3DefeatState InDefeatState) {
}


