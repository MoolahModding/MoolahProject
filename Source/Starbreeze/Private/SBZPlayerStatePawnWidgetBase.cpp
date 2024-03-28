#include "SBZPlayerStatePawnWidgetBase.h"

bool USBZPlayerStatePawnWidgetBase::IsWidgetPawnLocallyControlled() const {
    return false;
}

USBZPlayerStatePawnWidgetBase::USBZPlayerStatePawnWidgetBase() {
    this->PlayerCharacter = NULL;
}

