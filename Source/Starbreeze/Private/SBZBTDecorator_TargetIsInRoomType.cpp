#include "SBZBTDecorator_TargetIsInRoomType.h"

USBZBTDecorator_TargetIsInRoomType::USBZBTDecorator_TargetIsInRoomType() {
    this->NodeName = TEXT("Target Is In Room Type");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->RoomType = 1;
}


