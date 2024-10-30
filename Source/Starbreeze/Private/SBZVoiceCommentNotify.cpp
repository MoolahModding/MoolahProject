#include "SBZVoiceCommentNotify.h"

USBZVoiceCommentNotify::USBZVoiceCommentNotify() {
    this->VoiceComment = NULL;
    this->bUseDialogEvent = false;
    this->DialogEvent = NULL;
    this->VoicePriority = ESBZVoicePriority::MediumPriority;
}


