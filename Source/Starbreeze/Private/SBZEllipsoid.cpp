#include "SBZEllipsoid.h"
#include "SBZEllipsoidComponent.h"

ASBZEllipsoid::ASBZEllipsoid() {
    this->EllipsoidComponent = CreateDefaultSubobject<USBZEllipsoidComponent>(TEXT("SBZEllipsoidComponent"));
}

