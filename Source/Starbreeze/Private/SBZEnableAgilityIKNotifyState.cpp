#include "SBZEnableAgilityIKNotifyState.h"

USBZEnableAgilityIKNotifyState::USBZEnableAgilityIKNotifyState() {
    this->HandIKType = ESBZAgilityIKHandIKType::Left;
    this->BlendInDuration = 0.10f;
    this->BlendOutDuration = 0.10f;
    this->bOnlyAffectZ = true;
    this->PointType = ESBZAgilityPointType::FrontEdgeTop;
}

