#include "SBZHoldOutDroneTagReactionConfig.h"

FSBZHoldOutDroneTagReactionConfig::FSBZHoldOutDroneTagReactionConfig() {
    this->bIgnoredOnDedicatedServer = false;
    this->bIgnoredOnClient = false;
    this->bFireAndForget = false;
    this->DroneReactionClass = NULL;
}

