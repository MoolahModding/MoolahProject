#include "SBZBinaryStateNode.h"
#include "Components/SceneComponent.h"

ASBZBinaryStateNode::ASBZBinaryStateNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bState = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZBinaryStateNode::SetState(bool bInState) {
}

bool ASBZBinaryStateNode::GetState() const {
    return false;
}


