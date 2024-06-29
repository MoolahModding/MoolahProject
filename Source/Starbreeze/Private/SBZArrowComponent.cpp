#include "SBZArrowComponent.h"

USBZArrowComponent::USBZArrowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bUseEditorCompositing = true;
    this->From = NULL;
    this->To = NULL;
}


