#include "SBZBTTask_AlignWithLifeAction.h"

USBZBTTask_AlignWithLifeAction::USBZBTTask_AlignWithLifeAction() {
    this->NodeName = TEXT("SBZ Align With Life Action");
    this->MaxAlignmentDuration = 2.00f;
    this->WaitDurationFactor = 0.00f;
    this->AlignmentMode = ESBZLifeActionAlignmentMode::Both;
}


