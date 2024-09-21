#include "SBZPlayerStartGroup.h"
#include "Components/SceneComponent.h"

ASBZPlayerStartGroup::ASBZPlayerStartGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Weight = 1.00f;
}


