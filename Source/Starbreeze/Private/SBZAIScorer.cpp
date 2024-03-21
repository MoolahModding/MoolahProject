#include "SBZAIScorer.h"

USBZAIScorer::USBZAIScorer() {
    this->Weight = 1.00f;
    this->OutputCurve = NULL;
    this->bIsInversed = false;
    this->AIController = NULL;
}

