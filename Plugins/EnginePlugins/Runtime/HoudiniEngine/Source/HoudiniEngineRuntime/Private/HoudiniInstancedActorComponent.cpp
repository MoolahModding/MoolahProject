#include "HoudiniInstancedActorComponent.h"

UHoudiniInstancedActorComponent::UHoudiniInstancedActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->Mobility = EComponentMobility::Static;
    this->InstancedObject = NULL;
}


