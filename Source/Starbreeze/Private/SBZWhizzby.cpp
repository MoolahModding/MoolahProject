#include "SBZWhizzby.h"
#include "Components/SceneComponent.h"

ASBZWhizzby::ASBZWhizzby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->PlayerFeedback = NULL;
    this->PlayerCameraFeedbackComponent = NULL;
}


