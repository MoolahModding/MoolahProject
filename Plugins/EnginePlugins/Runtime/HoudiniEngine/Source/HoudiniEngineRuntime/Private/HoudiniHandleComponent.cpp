#include "HoudiniHandleComponent.h"

UHoudiniHandleComponent::UHoudiniHandleComponent() {
    this->RSTParm = NULL;
    this->RotOrderParm = NULL;
    this->HandleType = EHoudiniHandleType::Xform;
}


