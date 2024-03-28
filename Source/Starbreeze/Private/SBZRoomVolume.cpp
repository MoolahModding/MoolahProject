#include "SBZRoomVolume.h"

void ASBZRoomVolume::SetRoomType(ESBZRoomType InRoomType) {
}

void ASBZRoomVolume::SetRoomName(const FText& InRoomName) {
}

ESBZRoomType ASBZRoomVolume::GetRoomType() const {
    return ESBZRoomType::None;
}

FText ASBZRoomVolume::GetRoomName() const {
    return FText::GetEmpty();
}

ASBZRoomVolume::ASBZRoomVolume() {
    this->Priority = 0;
    this->RoomType = ESBZRoomType::Public;
    this->Label = ESBZRoomLabel::OutsideHeistArea;
}

