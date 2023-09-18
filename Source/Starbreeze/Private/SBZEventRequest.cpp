#include "SBZEventRequest.h"

FSBZEventRequest::FSBZEventRequest() {
    this->VoiceComment = NULL;
    this->VoicePriority = ESBZVoicePriority::VeryLowPriority;
    this->EQSQuery = NULL;
    this->TargetFinder = NULL;
    this->bShouldLoopFromBeginPlay = false;
}

