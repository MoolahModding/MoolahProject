#include "SBZCharacterVoiceComponent.h"

USBZCharacterVoiceComponent::USBZCharacterVoiceComponent() {
    this->VoiceAttachPoint = TEXT("Jaw");
    this->VoiceSpacialRTPC = NULL;
    this->VoiceFilterRTPC = NULL;
    this->VoiceFilterRTPCValue = 0.00f;
    this->DialogAnimDataCollection = NULL;
    this->RemoveLipSyncPrefix = TEXT("LPS_");
    this->SBZCharacterOwner = NULL;
    this->PerformsInDialog = NULL;
    this->bAutoActivate = false;
}

void USBZCharacterVoiceComponent::StopTalking() {
}

void USBZCharacterVoiceComponent::Server_SaySystemComment_Implementation(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority, bool bServerInstigated) {
}
bool USBZCharacterVoiceComponent::Server_SaySystemComment_Validate(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority, bool bServerInstigated) {
    return true;
}

void USBZCharacterVoiceComponent::SaySystemComment(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority, bool bReplicated, bool bServerInstigated) {
}

void USBZCharacterVoiceComponent::SayGrunt(ESBZVoiceGruntType GruntType) {
}

void USBZCharacterVoiceComponent::SayDialogLineByCharacterEvent(FString& CommentState) {
}

void USBZCharacterVoiceComponent::SayDialogLine(UAkAudioEvent* AudioEvent) {
}

void USBZCharacterVoiceComponent::SayCharacterEvent(const FString& CommentState, const FSBZVoiceEventData& InCharacterVoiceEvent, ESBZVoicePriority InPlayingPriority) {
}

void USBZCharacterVoiceComponent::Say(UAkAudioEvent* AudioEvent, ESBZVoicePriority InPlayingPriority) {
}

void USBZCharacterVoiceComponent::OnTakeDamage() {
}

void USBZCharacterVoiceComponent::OnStaminaValueChanged(float NewValue, float OldValue, float MaxValue) {
}

void USBZCharacterVoiceComponent::OnDeath() {
}

void USBZCharacterVoiceComponent::Multicast_SaySystemComment_ServerInstigated_Implementation(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority) {
}

void USBZCharacterVoiceComponent::Multicast_SaySystemComment_Implementation(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority) {
}

void USBZCharacterVoiceComponent::CallRecieved(const FSBZPlayerCallEvent& CallEventData) {
}


