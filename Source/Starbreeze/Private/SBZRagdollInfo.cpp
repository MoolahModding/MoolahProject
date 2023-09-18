#include "SBZRagdollInfo.h"

FSBZRagdollInfo::FSBZRagdollInfo() {
    this->Character = NULL;
    this->MotionlessTimer = 0.00f;
    this->NetID = 0;
    this->bIsCharacterInitialized = false;
    this->bIsServerHipsLocationValid = false;
}

