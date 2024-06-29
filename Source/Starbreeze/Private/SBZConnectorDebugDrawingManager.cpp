#include "SBZConnectorDebugDrawingManager.h"
#include "Components/LineBatchComponent.h"

ASBZConnectorDebugDrawingManager::ASBZConnectorDebugDrawingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->LineBatchComponent = CreateDefaultSubobject<ULineBatchComponent>(TEXT("LineBatchComponent"));
}


