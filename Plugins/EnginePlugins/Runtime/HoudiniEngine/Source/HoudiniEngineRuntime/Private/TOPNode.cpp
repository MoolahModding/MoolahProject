#include "TOPNode.h"

UTOPNode::UTOPNode() {
    this->NodeId = -1;
    this->WorkResultParent = NULL;
    this->bHidden = false;
    this->bAutoLoad = false;
    this->NodeState = EPDGNodeState::None;
    this->bCachedHaveNotLoadedWorkResults = false;
    this->bCachedHaveLoadedWorkResults = false;
    this->bHasChildNodes = false;
    this->bShow = false;
    this->bHasReceivedCookCompleteEvent = false;
}


