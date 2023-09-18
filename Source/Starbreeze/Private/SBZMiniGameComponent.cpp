#include "SBZMiniGameComponent.h"

USBZMiniGameComponent::USBZMiniGameComponent() {
    this->Data = NULL;
    this->AudioComponent = NULL;
    this->AbortedAudioEvent = NULL;
    this->SuccessAudioEvent = NULL;
    this->FailedAudioEvent = NULL;
    this->InitiatedAudioEvent = NULL;
    this->InProgressAudioEvent = NULL;
    this->OpenWidgetAudioEvent = NULL;
    this->CloseWidgetAudioEvent = NULL;
    this->SilenceMinigameAudioEvent = NULL;
    this->AbortedAudioRtpc = NULL;
    this->SuccessAudioRtpc = NULL;
    this->FailedAudioRtpc = NULL;
    this->InitiatedAudioRtpc = NULL;
    this->InProgressAudioRtpc = NULL;
    this->bSpawnMiniGameOnHackingTool = false;
    this->bSpawnMiniGameOnObject = false;
    this->WidgetZOrder = ESBZWidgetZOrdering::DefaultBackground;
    this->HackingAmmoCost = 1;
    this->SpawnedWidget = NULL;
    this->CurrentControlsReferenceID = -1;
    this->MiniGameDifficulty = 1;
    this->WinningParticipant = NULL;
    this->RootComponent = NULL;
    this->ActiveLocallyController = NULL;
}

void USBZMiniGameComponent::SetAudioPerspective(UAkComponent* AkComponent, UAkRtpc* Rtpc, bool bIsLocallyControlled) {
}

void USBZMiniGameComponent::ServerAbortMiniGame() {
}

void USBZMiniGameComponent::PlaySoundOnNative(UAkAudioEvent* AudioEvent) {
}

void USBZMiniGameComponent::PlaySound(UAkComponent* AkComponent, UAkAudioEvent* AudioEvent) {
}

void USBZMiniGameComponent::Multicast_ActivateMiniGame_Implementation(ASBZCharacter* Character) {
}

void USBZMiniGameComponent::ActivateMiniGame(ASBZCharacter* Character, bool bIsLocallyControlled, bool bIsReplicated) {
}


