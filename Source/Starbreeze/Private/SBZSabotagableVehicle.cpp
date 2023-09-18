#include "SBZSabotagableVehicle.h"
#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZPredefinedBoxNavModifierComponent.h"
#include "SBZWheeledVehicleSkeletalMeshComponent.h"

ASBZSabotagableVehicle::ASBZSabotagableVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SabotagePointClass = NULL;
    this->SabotagePointClass = NULL;
    this->MovingNavModifier = CreateDefaultSubobject<USBZPredefinedBoxNavModifierComponent>(TEXT("SBZPredefinedBoxNavModifierComponent"));
    this->SabotagePointInstance = NULL;
    this->EscortCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->EscortCapsule->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USBZWheeledVehicleSkeletalMeshComponent*>(this));
    this->SpeedPerPlayer = 1.20f;
    this->PlayersOverlapping = 0;
    this->bEscortModeEnabled = false;
    this->bStartWithEscortModeEnabled = false;
    this->EscortCapsulePreplanningRadius = 800.00f;
    this->EscortCapsulePreplanningHalfHeight = 800.00f;
}

void ASBZSabotagableVehicle::UpdateSabotageVehicle() {
}

void ASBZSabotagableVehicle::SpawnSabotagePoint() {
}

void ASBZSabotagableVehicle::SetEscortModeEnabled(bool bEnabled) {
}

void ASBZSabotagableVehicle::OnStopped() {
}

void ASBZSabotagableVehicle::OnStartedFollowingSpline() {
}

void ASBZSabotagableVehicle::OnSabotaged(bool bWasSabotaged) {
}

void ASBZSabotagableVehicle::OnRep_EscortModeEnabled() {
}

void ASBZSabotagableVehicle::OnPathEnded() {
}

void ASBZSabotagableVehicle::OnEscortCapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZSabotagableVehicle::OnEscortCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZSabotagableVehicle::Multicast_SetEscortModeEnabled_Implementation(bool bEnabled) {
}




void ASBZSabotagableVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZSabotagableVehicle, bEscortModeEnabled);
}


