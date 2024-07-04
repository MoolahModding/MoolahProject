#include "SBZBTTask_PlayVoiceComment.h"

USBZBTTask_PlayVoiceComment::USBZBTTask_PlayVoiceComment() {
    this->NodeName = TEXT("PlayVoiceComment");
    this->VoiceComment = NULL;
    this->VoicePriority = ESBZVoicePriority::MediumPriority;
}


