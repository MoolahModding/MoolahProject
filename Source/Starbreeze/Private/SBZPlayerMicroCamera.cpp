#include "SBZPlayerMicroCamera.h"
#include "Net/UnrealNetwork.h"
#include "SBZToolSkeletalMeshComponent.h"

ASBZPlayerMicroCamera::ASBZPlayerMicroCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMesh = CreateDefaultSubobject<USBZToolSkeletalMeshComponent>(TEXT("MeshComponent"));
    this->RotationSpeed = 100.00f;
    this->InstigatorCharacter = NULL;
    FProperty* p_bReplicateMovement = GetClass()->FindPropertyByName("bReplicateMovement");
    *p_bReplicateMovement->ContainerPtrToValuePtr<uint8>(this) = true;
    this->bReplicates = true;
    FProperty* p_bActorEnableCollision = GetClass()->FindPropertyByName("bActorEnableCollision");
    *p_bActorEnableCollision->ContainerPtrToValuePtr<uint8>(this) = false;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = SkeletalMesh;
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


