#include "SBZAudioScreen.h"
#include "AkComponent.h"

void ASBZAudioScreen::OnAudioEventComplete(EAkCallbackType Type, UAkCallbackInfo* CallbackInfo) {
}




ASBZAudioScreen::ASBZAudioScreen() {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->CurrentRoom = NULL;
    this->CurrentReactorState = ESBZEventReactorState::Inactive;
}

