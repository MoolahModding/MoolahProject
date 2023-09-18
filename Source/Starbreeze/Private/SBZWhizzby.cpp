#include "SBZWhizzby.h"
#include "Components/SceneComponent.h"

ASBZWhizzby::ASBZWhizzby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerFeedback = NULL;
    this->PlayerFeedback = NULL;
    this->PlayerCameraFeedbackComponent = NULL;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


