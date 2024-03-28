#include "SBZAerialVehicle.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAerialVehicleAudioComponent.h"
#include "SBZAerialVehicleSplineFollowingComponent.h"

void ASBZAerialVehicle::SetDoorState(uint8 NewState) {
}

void ASBZAerialVehicle::SetDoorOpen(ESBZAerialVehicleDoor Door, bool bOpen) {
}


void ASBZAerialVehicle::OnStoppedCallback() {
}

void ASBZAerialVehicle::OnSplineLeftCallback(ASBZSpline* Spline) {
}

void ASBZAerialVehicle::OnSplineEnteredCallback(ASBZSpline* Spline, bool bPathEntered, bool bTeleportToPathStart) {
}

void ASBZAerialVehicle::OnSplineEndReachedCallback(ASBZSpline* Spline) {
}

void ASBZAerialVehicle::OnRep_RepMove() {
}

void ASBZAerialVehicle::OnRep_DoorState(uint8 OldState) {
}

void ASBZAerialVehicle::OnPathEndReachedCallback() {
}

void ASBZAerialVehicle::OnBeginStopCallback() {
}

void ASBZAerialVehicle::Multicast_SetDoorState_Implementation(uint8 NewState) {
}

USBZVehicleSplineFollowingComponent* ASBZAerialVehicle::GetVehicleSplineFollowingComponent() const {
    return NULL;
}

void ASBZAerialVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAerialVehicle, DoorState);
    DOREPLIFETIME(ASBZAerialVehicle, RepMove);
    DOREPLIFETIME(ASBZAerialVehicle, MaxRollAngle);
    DOREPLIFETIME(ASBZAerialVehicle, PitchAngle);
}

ASBZAerialVehicle::ASBZAerialVehicle() {
    this->AerialVehicleAudioComponent = CreateDefaultSubobject<USBZAerialVehicleAudioComponent>(TEXT("SBZAerialVehicleAudioComponent"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AerialVehicleMesh"));
    this->SplineFollowingComponent = CreateDefaultSubobject<USBZAerialVehicleSplineFollowingComponent>(TEXT("SBZVehicleSplineFollowingComponent"));
    this->StateMachine = NULL;
    this->DoorState = 0;
    this->MaxRollAngle = 90.00f;
    this->PitchAngle = -15.00f;
    this->MaxHoverYawAngle = 10.00f;
    this->MaxHoverRollAngle = 5.00f;
    this->LandingRotation = 0.00f;
    this->bUseLandingRotation = false;
    this->MainRotorName = TEXT("MainRotor");
    this->TailRotorName = TEXT("TailRotor");
    this->RootName = TEXT("Root");
    this->bActiveEngine = false;
}

