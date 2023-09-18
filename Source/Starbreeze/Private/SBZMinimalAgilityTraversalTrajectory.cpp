#include "SBZMinimalAgilityTraversalTrajectory.h"

FSBZMinimalAgilityTraversalTrajectory::FSBZMinimalAgilityTraversalTrajectory() {
    this->EntrySpeed = 0;
    this->AgilityType = ESBZAgilityTraversalType::VaultLowSlow;
    this->bEndsInCrouchState = false;
    this->bEndsFalling = false;
}

