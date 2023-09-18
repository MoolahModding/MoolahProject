#include "PlayerVoiceChatActor.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

APlayerVoiceChatActor::APlayerVoiceChatActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->microphoneSpeakComponent = NULL;
    this->ownerPlayerState = NULL;
    this->idVoiceChat = 0;
    this->voiceVolume = 1.00f;
    this->ServerPerformAntiCheat = false;
    this->AntiCheatAllowUseProximity = true;
    this->AntiCheatAllowUseGlobal = true;
    this->AntiCheatMaxProximityRange = 1000.00f;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = RootSceneComponent;
}

void APlayerVoiceChatActor::ServerSetMaxProximityRange(float _maxProximityRange) {
}

void APlayerVoiceChatActor::ServerSetAttenuation(bool enableAttenuation, const FString& _pathToAttenuationAsset) {
}

void APlayerVoiceChatActor::ServerSetAllowUseProximity(bool _allowUseRange) {
}

void APlayerVoiceChatActor::ServerSetAllowUseGlobal(bool _allowUseGlobal) {
}

void APlayerVoiceChatActor::ServerRemoveChannel(int32 channelToRemove) {
}

void APlayerVoiceChatActor::ServerAddChannel(int32 channelToAdd) {
}

void APlayerVoiceChatActor::RPCServerUpdatePosAudioComp_Implementation(FVector worldPos) {
}

void APlayerVoiceChatActor::RPCClientSetMicrophoneVolume_Implementation(float volume) {
}

void APlayerVoiceChatActor::RPCClientAskRemoveChannel_Implementation(int32 channelToRemove) {
}

void APlayerVoiceChatActor::RPCClientAskAddChannel_Implementation(int32 channelToAdd) {
}

void APlayerVoiceChatActor::RepNotifyVoiceVolume() {
}

void APlayerVoiceChatActor::RepNotifyMicComp() {
}

void APlayerVoiceChatActor::RepNotifyAttenuationAsset() {
}

void APlayerVoiceChatActor::muteAudio(bool isMute) {
}

void APlayerVoiceChatActor::DelegateEndPlayOwner(AActor* act, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void APlayerVoiceChatActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerVoiceChatActor, microphoneSpeakComponent);
    DOREPLIFETIME(APlayerVoiceChatActor, ownerPlayerState);
    DOREPLIFETIME(APlayerVoiceChatActor, idVoiceChat);
    DOREPLIFETIME(APlayerVoiceChatActor, voiceVolume);
    DOREPLIFETIME(APlayerVoiceChatActor, radioChannelSubscribed);
    DOREPLIFETIME(APlayerVoiceChatActor, pathToAttenuationAsset);
}


