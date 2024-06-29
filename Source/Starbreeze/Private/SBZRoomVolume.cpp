#include "SBZRoomVolume.h"

ASBZRoomVolume::ASBZRoomVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->Priority = 0;
    this->RoomType = ESBZRoomType::Public;
    this->Label = ESBZRoomLabel::OutsideHeistArea;
}

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


