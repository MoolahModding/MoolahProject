#include "SBZAIDroneController.h"
#include "SBZAIPerceptionComponent.h"

ASBZAIDroneController::ASBZAIDroneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerceptionComponent = CreateDefaultSubobject<USBZAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
}


