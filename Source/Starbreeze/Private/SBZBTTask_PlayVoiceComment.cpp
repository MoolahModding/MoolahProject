#include "SBZBTTask_PlayVoiceComment.h"

USBZBTTask_PlayVoiceComment::USBZBTTask_PlayVoiceComment() {
    this->VoiceComment = NULL;
    this->VoicePriority = ESBZVoicePriority::MediumPriority;
    this->NodeName = TEXT("PlayVoiceComment");
}


