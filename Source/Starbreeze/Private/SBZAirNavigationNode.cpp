#include "SBZAirNavigationNode.h"

FSBZAirNavigationNode::FSBZAirNavigationNode() {
    this->Center[0] = 0;
    this->Center[1] = 0;
    this->Center[2] = 0;
    this->HalfSize = 0;
    this->bIsLeaf = false;
    this->bIsBlocked = false;
    this->FirstChildIndex = 0;
}

