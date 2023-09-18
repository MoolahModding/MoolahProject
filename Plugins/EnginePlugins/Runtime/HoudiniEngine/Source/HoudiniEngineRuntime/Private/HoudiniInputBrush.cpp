#include "HoudiniInputBrush.h"

UHoudiniInputBrush::UHoudiniInputBrush() {
    this->CombinedModel = NULL;
    this->bIgnoreInputObject = false;
    this->CachedInputBrushType = Brush_Default;
}


