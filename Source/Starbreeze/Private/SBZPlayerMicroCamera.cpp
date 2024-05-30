#include "SBZPlayerMicroCamera.h"
#include "Net/UnrealNetwork.h"
#include "SBZToolSkeletalMeshComponent.h"

ASBZPlayerMicroCamera::ASBZPlayerMicroCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USBZToolSkeletalMeshComponent>(TEXT("MeshComponent"));
    this->SkeletalMesh = (USBZToolSkeletalMeshComponent*)RootComponent;
    this->RotationSpeed = 100.00f;
    this->InstigatorCharacter = NULL;
}

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


