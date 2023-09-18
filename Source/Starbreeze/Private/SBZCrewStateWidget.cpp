#include "SBZCrewStateWidget.h"

USBZCrewStateWidget::USBZCrewStateWidget() {
    this->CrewStateActor = NULL;
}

bool USBZCrewStateWidget::IsForLocalPlayerState() const {
    return false;
}


