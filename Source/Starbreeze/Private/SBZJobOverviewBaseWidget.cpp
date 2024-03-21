#include "SBZJobOverviewBaseWidget.h"

void USBZJobOverviewBaseWidget::OnPlayerReadyStatusUpdated(const TArray<FSBZPlayerReadyInfo>& PlayerReadyStatus) {
}


void USBZJobOverviewBaseWidget::HandleIntroSequenceStarted() {
}

USBZJobOverviewBaseWidget::USBZJobOverviewBaseWidget() {
    this->PlayerStatusWidgetClass = NULL;
    this->Panel_PartyWidgetContainer = NULL;
}

