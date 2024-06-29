#include "SBZBTService_WarnNeighbours.h"

USBZBTService_WarnNeighbours::USBZBTService_WarnNeighbours() {
    this->NodeName = TEXT("WarnNeighbors");
    this->Range = 1500.00f;
    this->VoiceComment = NULL;
    this->VoicePriority = ESBZVoicePriority::MediumPriority;
}


