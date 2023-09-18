#include "SBZAgilityTrajectory.h"

FSBZAgilityTrajectory::FSBZAgilityTrajectory() {
    this->AgilityType = ESBZAgilityType::JumpingDown;
    this->bValid = false;
    this->ForcedMontage = NULL;
    this->bRecomputeEndUsingAnimation = false;
    this->AreaClass = NULL;
    this->AreaClass = NULL;
}

