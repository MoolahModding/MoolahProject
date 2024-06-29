#include "SBZShoutoutComponent.h"

USBZShoutoutComponent::USBZShoutoutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShoutOutRadius = 600.00f;
    this->MaxRoomPathDistanceFromInitialTarget = 1000.00f;
    this->HeightCutOffDistance = 400.00f;
    this->RaytraceTargetFindDist = 40000.00f;
    this->MarkingOutlineAsset = NULL;
    this->MarkLimit = 1;
    this->ShoutoutDuration = 5.00f;
    this->DefaultMarkComment = NULL;
    this->DefaultHelpComment = NULL;
    this->DefaultGetDownComment = NULL;
    this->DefaultCopSurrenderComment = NULL;
    this->PingMarkerAsset = NULL;
    this->PingTimer = 5.00f;
    this->CopSurrenderAction = NULL;
    this->PingIndex = -1;
    this->AbilitySystem = NULL;
}

void USBZShoutoutComponent::SetMarkLimit(int32 NewLimit) {
}

void USBZShoutoutComponent::Server_Shoutout_Implementation(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target) {
}
bool USBZShoutoutComponent::Server_Shoutout_Validate(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target) {
    return true;
}

void USBZShoutoutComponent::Server_SendPing_Implementation(const FVector& Location) {
}

void USBZShoutoutComponent::OnPingComplete() {
}

void USBZShoutoutComponent::Multicast_ShoutoutWithoutTarget_Implementation(ESBZShoutActionType Action) {
}

void USBZShoutoutComponent::Multicast_Shoutout_Implementation(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target) {
}

void USBZShoutoutComponent::Multicast_SendPing_Implementation(const FVector& Location) {
}

bool USBZShoutoutComponent::IsActorMarked(AActor* Actor) {
    return false;
}


