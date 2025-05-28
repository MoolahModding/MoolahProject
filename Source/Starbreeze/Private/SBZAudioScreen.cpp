#include "SBZAudioScreen.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"

ASBZAudioScreen::ASBZAudioScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->CurrentRoom = NULL;
    this->CurrentReactorState = ESBZEventReactorState::Inactive;
    this->AkComponent->SetupAttachment(RootComponent);
}

void ASBZAudioScreen::OnAudioEventComplete(EAkCallbackType Type, UAkCallbackInfo* CallbackInfo) {
}





