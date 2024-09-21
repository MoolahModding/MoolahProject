#include "SBZSabotagableVehicle.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZPredefinedBoxNavModifierComponent.h"

ASBZSabotagableVehicle::ASBZSabotagableVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SabotagePointClass = NULL;
    this->MovingNavModifier = CreateDefaultSubobject<USBZPredefinedBoxNavModifierComponent>(TEXT("SBZPredefinedBoxNavModifierComponent"));
    this->SabotagePointInstance = NULL;
    this->EscortCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->SpeedPerPlayer = 1.20f;
    this->PlayersOverlapping = 0;
    this->bEscortModeEnabled = false;
    this->bStartWithEscortModeEnabled = false;
    this->EscortCapsulePreplanningRadius = 800.00f;
    this->EscortCapsulePreplanningHalfHeight = 800.00f;
    this->InsideTruckVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->InsideTruckTeleportLocation = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->EscortCapsule->SetupAttachment(RootComponent);
    this->InsideTruckVolume->SetupAttachment(RootComponent);
    this->InsideTruckTeleportLocation->SetupAttachment(RootComponent);
}

void ASBZSabotagableVehicle::UpdateSabotageVehicle() {
}

void ASBZSabotagableVehicle::SpawnSabotagePoint() {
}

void ASBZSabotagableVehicle::SetRearDoorsState(ESBZVehicleDoorState NewState) {
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

void ASBZSabotagableVehicle::OnPlayerInsideTruckBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZSabotagableVehicle::OnPathEnded() {
}

void ASBZSabotagableVehicle::OnEscortCapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZSabotagableVehicle::OnEscortCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZSabotagableVehicle::Multicast_SetRearDoorsState_Implementation(ESBZVehicleDoorState NewState) {
}

void ASBZSabotagableVehicle::Multicast_SetEscortModeEnabled_Implementation(bool bEnabled) {
}




void ASBZSabotagableVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZSabotagableVehicle, bEscortModeEnabled);
}


