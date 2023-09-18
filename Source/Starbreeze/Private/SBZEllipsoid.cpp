#include "SBZEllipsoid.h"
#include "SBZEllipsoidComponent.h"

ASBZEllipsoid::ASBZEllipsoid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EllipsoidComponent = CreateDefaultSubobject<USBZEllipsoidComponent>(TEXT("SBZEllipsoidComponent"));
    FProperty* p_bHidden = GetClass()->FindPropertyByName("bHidden");
    *p_bHidden->ContainerPtrToValuePtr<uint8>(this) = true;
    this->RootComponent = EllipsoidComponent;
}


