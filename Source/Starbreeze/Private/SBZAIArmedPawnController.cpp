#include "SBZAIArmedPawnController.h"
#include "SBZAIPerceptionComponent.h"

ASBZAIArmedPawnController::ASBZAIArmedPawnController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerceptionComponent = CreateDefaultSubobject<USBZAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
}


