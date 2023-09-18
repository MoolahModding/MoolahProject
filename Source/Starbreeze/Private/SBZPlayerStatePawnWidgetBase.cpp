#include "SBZPlayerStatePawnWidgetBase.h"

USBZPlayerStatePawnWidgetBase::USBZPlayerStatePawnWidgetBase() {
    this->PlayerCharacter = NULL;
}

bool USBZPlayerStatePawnWidgetBase::IsWidgetPawnLocallyControlled() const {
    return false;
}


