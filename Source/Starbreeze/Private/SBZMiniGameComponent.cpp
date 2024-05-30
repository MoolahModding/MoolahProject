#include "SBZMiniGameComponent.h"
#include "Net/UnrealNetwork.h"

USBZMiniGameComponent::USBZMiniGameComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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

void USBZMiniGameComponent::SetMiniGameData(USBZMiniGameData* InData) {
}

void USBZMiniGameComponent::SetAudioPerspective(UAkComponent* AkComponent, UAkRtpc* Rtpc, bool bIsLocallyControlled) {
}

void USBZMiniGameComponent::ServerAbortMiniGame() {
}

void USBZMiniGameComponent::PlaySoundOnNative(UAkAudioEvent* AudioEvent) {
}

void USBZMiniGameComponent::PlaySound(UAkComponent* AkComponent, UAkAudioEvent* AudioEvent) {
}

void USBZMiniGameComponent::OnPlayerStateEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void USBZMiniGameComponent::Multicast_SetMiniGameData_Implementation(USBZMiniGameData* InData) {
}

void USBZMiniGameComponent::Multicast_ActivateMiniGame_Implementation(ASBZCharacter* Character) {
}

UPD3MiniGameWidgetBase* USBZMiniGameComponent::GetSpawnedWidget() const {
    return NULL;
}

void USBZMiniGameComponent::ActivateMiniGame(ASBZCharacter* Character, bool bIsLocallyControlled, bool bIsReplicated) {
}

void USBZMiniGameComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZMiniGameComponent, Data);
}


