#include "SBZAgilityDeltaCorrectionNS.h"

USBZAgilityDeltaCorrectionNS::USBZAgilityDeltaCorrectionNS() {
    this->TargetPointType = ESBZAgilityPointType::FloorStart;
    this->WarpingDirection = ESBZAgilityWarpingDirection::FacingFront;
    this->bRecomputeUsingAnimation = false;
    this->bWarpOnYZOnly = false;
    this->bWarpOnXZOnly = false;
    this->TargetPointTypeToRecomputeFrom = ESBZAgilityPointType::FrontEdgeTop;
}

