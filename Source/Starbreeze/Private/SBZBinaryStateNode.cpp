#include "SBZBinaryStateNode.h"
#include "Components/SceneComponent.h"

ASBZBinaryStateNode::ASBZBinaryStateNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bState = false;
}

void ASBZBinaryStateNode::SetState(bool bInState) {
}

bool ASBZBinaryStateNode::GetState() const {
    return false;
}


