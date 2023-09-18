#include "SBZConfigRepClass.h"

FSBZConfigRepClass::FSBZConfigRepClass() {
    this->Type = ERepNodeRoutingStrategy::NotRouted;
    this->DistancePriorityScale = 0.00f;
    this->StarvationPriorityScale = 0.00f;
    this->CullDistance = 0.00f;
    this->ReplicationPeriodFrame = 0;
    this->FastPath_ReplicationPeriodFrame = 0;
    this->ActorChannelFrameTimeout = 0;
    this->bMustReplicateOnInitialFrame = false;
}

