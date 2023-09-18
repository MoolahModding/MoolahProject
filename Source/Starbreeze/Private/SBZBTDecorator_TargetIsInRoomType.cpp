#include "SBZBTDecorator_TargetIsInRoomType.h"

USBZBTDecorator_TargetIsInRoomType::USBZBTDecorator_TargetIsInRoomType() {
    this->RoomType = 1;
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->NodeName = TEXT("Target Is In Room Type");
}


