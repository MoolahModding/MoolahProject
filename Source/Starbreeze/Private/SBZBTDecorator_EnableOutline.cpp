#include "SBZBTDecorator_EnableOutline.h"

USBZBTDecorator_EnableOutline::USBZBTDecorator_EnableOutline() {
    this->NodeName = TEXT("Enable outline");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->OutlineAsset = NULL;
    this->bIsDifficultyBased = false;
    this->SelectedDifficulty = 0;
}


