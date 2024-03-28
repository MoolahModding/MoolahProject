#include "SBZPatrolPoint.h"

bool ASBZPatrolPoint::IsTestingPoint() const {
    return false;
}

void ASBZPatrolPoint::Disconnect(ASBZPatrolPoint* Next) {
}

void ASBZPatrolPoint::Connect(ASBZPatrolPoint* Next) {
}

ASBZPatrolPoint::ASBZPatrolPoint() {
    this->bRandomSet = false;
    this->bUsePointRotation = false;
    this->bIsTesting = false;
}

