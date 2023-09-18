#include "PD3HUDRoomStatusWidget.h"

UPD3HUDRoomStatusWidget::UPD3HUDRoomStatusWidget() {
    this->RoomType = ESBZRoomType::None;
    this->InFeedbackClass = NULL;
    this->InFeedbackClass = NULL;
    this->bHasGoneLoud = false;
}

void UPD3HUDRoomStatusWidget::RoomVolumeChanged(ASBZRoomVolume* InRoomVolume) {
}

void UPD3HUDRoomStatusWidget::RoomTypeChanged(ESBZRoomType NewRoomType) {
}





void UPD3HUDRoomStatusWidget::HandleHeistGoneLoud() {
}


