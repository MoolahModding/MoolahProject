#include "SBZBoneLocker.h"

FSBZBoneLocker::FSBZBoneLocker() {
    this->LockAlphaThreshold = 0.00f;
    this->MaxDist = 0.00f;
    this->MaxYaw = 0.00f;
    this->bTranslationLock2D = false;
    this->InterpSpeed = 0.00f;
}

