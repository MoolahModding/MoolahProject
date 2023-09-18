#include "HoudiniInstancedOutput.h"

FHoudiniInstancedOutput::FHoudiniInstancedOutput() {
    this->OriginalObjectIndex = 0;
    this->bChanged = false;
    this->bStale = false;
}

