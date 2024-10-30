#include "HoudiniHandleComponent.h"

UHoudiniHandleComponent::UHoudiniHandleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RSTParm = NULL;
    this->RotOrderParm = NULL;
    this->HandleType = EHoudiniHandleType::Xform;
}


