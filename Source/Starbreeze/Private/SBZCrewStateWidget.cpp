#include "SBZCrewStateWidget.h"

bool USBZCrewStateWidget::IsForLocalPlayerState() const {
    return false;
}

USBZCrewStateWidget::USBZCrewStateWidget() {
    this->CrewStateActor = NULL;
}

