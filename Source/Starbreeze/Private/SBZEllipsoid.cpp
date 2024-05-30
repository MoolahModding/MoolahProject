#include "SBZEllipsoid.h"
#include "SBZEllipsoidComponent.h"

ASBZEllipsoid::ASBZEllipsoid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USBZEllipsoidComponent>(TEXT("SBZEllipsoidComponent"));
    this->EllipsoidComponent = (USBZEllipsoidComponent*)RootComponent;
}


