#include "HoudiniOutput.h"

UHoudiniOutput::UHoudiniOutput() {
    this->Type = EHoudiniOutputType::Invalid;
    this->bLandscapeWorldComposition = false;
    this->bIsEditableNode = false;
    this->bHasEditableNodeBuilt = false;
    this->bIsUpdating = false;
    this->bCanDeleteHoudiniNodes = true;
}


