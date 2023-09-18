#include "HoudiniInstancedActorComponent.h"

UHoudiniInstancedActorComponent::UHoudiniInstancedActorComponent() {
    this->InstancedObject = NULL;
    this->Mobility = EComponentMobility::Static;
    this->bCanEverAffectNavigation = true;
}


