#include "SBZPlayerMicroCamera.h"
#include "Net/UnrealNetwork.h"
#include "SBZToolSkeletalMeshComponent.h"

void ASBZPlayerMicroCamera::OnRep_ViewTargetPlayerStateIdArray(const TArray<int32>& OldViewTargetPlayerStateIdArray) {
}

void ASBZPlayerMicroCamera::OnRep_CameraTargetRotation() {
}

void ASBZPlayerMicroCamera::OnRep_CameraCurrentRotation() {
}

void ASBZPlayerMicroCamera::OnPlayerStateReplicated() {
}

void ASBZPlayerMicroCamera::Multicast_EndViewTarget_Implementation(int32 PlayerId) {
}

void ASBZPlayerMicroCamera::Multicast_BecomeViewTarget_Implementation(int32 PlayerId) {
}


void ASBZPlayerMicroCamera::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlayerMicroCamera, ReplicatedCameraTargetRotation);
    DOREPLIFETIME(ASBZPlayerMicroCamera, ReplicatedCameraCurrentRotation);
    DOREPLIFETIME(ASBZPlayerMicroCamera, ViewTargetPlayerStateIdArray);
}

ASBZPlayerMicroCamera::ASBZPlayerMicroCamera() {
    this->SkeletalMesh = CreateDefaultSubobject<USBZToolSkeletalMeshComponent>(TEXT("MeshComponent"));
    this->RotationSpeed = 100.00f;
    this->InstigatorCharacter = NULL;
}

