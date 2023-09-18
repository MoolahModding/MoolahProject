#include "AkComponent.h"

UAkComponent::UAkComponent() {
    this->bUseSpatialAudio = false;
    this->OcclusionCollisionChannel = ECC_Visibility;
    this->EnableSpotReflectors = false;
    this->outerRadius = 0.00f;
    this->innerRadius = 0.00f;
    this->EarlyReflectionAuxBus = NULL;
    this->EarlyReflectionOrder = 0;
    this->EarlyReflectionBusSendGain = 1.00f;
    this->EarlyReflectionMaxPathLength = 0.00f;
    this->roomReverbAuxBusGain = 0.00f;
    this->diffractionMaxEdges = 0;
    this->diffractionMaxPaths = 0;
    this->diffractionMaxPathLength = 0.00f;
    this->DrawFirstOrderReflections = false;
    this->DrawSecondOrderReflections = false;
    this->DrawHigherOrderReflections = false;
    this->DrawDiffraction = false;
    this->MinDistanceThresholdForUpdate = 50.00f;
    this->MinUpdateTime = 2.00f;
    this->bAutoDeactivate = true;
    this->StopWhenOwnerDestroyed = true;
    this->AttenuationScalingFactor = 1.00f;
    this->OcclusionRefreshInterval = 0.50f;
    this->bUseReverbVolumes = true;
    this->bAutoActivate = true;
}

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes) {
}

void UAkComponent::UseEarlyReflections(UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName) {
}

void UAkComponent::ShowStaticSoundSource(bool bVal, float Radius) {
}

void UAkComponent::ShowStaticSoundAttenuation(bool bVal, float Radius) {
}

void UAkComponent::ShowSoundObstruction(bool bVal, float Radius) {
}

void UAkComponent::ShowSoundEvent(bool bVal) {
}

void UAkComponent::ShowDynamicSoundSource(bool bVal, float Radius) {
}

void UAkComponent::ShowDynamicSoundAttenuation(bool bVal, float Radius) {
}

void UAkComponent::ShowAudioBank(bool bVal) {
}

void UAkComponent::SetSwitch(UAkSwitchValue* SwitchValue, const FString& SwitchGroup, const FString& SwitchState) {
}

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed) {
}

void UAkComponent::SetSoundSourceFilter(bool bVal, FString& List) {
}

void UAkComponent::SetOutputBusVolume(float BusVolume) {
}

void UAkComponent::SetListeners(const TArray<UAkComponent*>& Listeners) {
}

void UAkComponent::SetGameObjectRadius(float in_outerRadius, float in_innerRadius) {
}

void UAkComponent::SetEarlyReflectionsVolume(float SendVolume) {
}

void UAkComponent::SetEarlyReflectionsAuxBus(const FString& AuxBusName) {
}

void UAkComponent::SetAttenuationScalingFactor(float Value) {
}

void UAkComponent::PostTrigger(UAkTrigger* TriggerValue, const FString& Trigger) {
}

void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
}

int32 UAkComponent::PostAssociatedAkEventAndWaitForEnd(const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
    return 0;
}

int32 UAkComponent::PostAkEventByName(const FString& in_EventName) {
    return 0;
}

void UAkComponent::PostAkEventAndWaitForEndAsync(UAkAudioEvent* AkEvent, int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
}

int32 UAkComponent::PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, const FString& in_EventName, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
    return 0;
}

void UAkComponent::GetSoundSourceFilter(bool bVal) {
}

float UAkComponent::GetAttenuationRadius() const {
    return 0.0f;
}

void UAkComponent::EnableSoundSourceFilter(bool bVal) {
}

void UAkComponent::EnableSoundObstruction(bool bVal) {
}

void UAkComponent::EnableDebugSoundObstruction(bool bVal) {
}


