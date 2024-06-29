#include "SBZNarrator.h"
#include "Components/SceneComponent.h"
#include "SBZCharacterVoiceComponent.h"

ASBZNarrator::ASBZNarrator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->VoiceComponent = CreateDefaultSubobject<USBZCharacterVoiceComponent>(TEXT("SBZCharacterVoiceComponent"));
}


