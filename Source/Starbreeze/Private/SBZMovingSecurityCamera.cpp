#include "SBZMovingSecurityCamera.h"
#include "Net/UnrealNetwork.h"

ASBZMovingSecurityCamera::ASBZMovingSecurityCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementSpeed = 10.00f;
    this->ChosenSpline = NULL;
    this->DistanceAlongSpline = 0.00f;
    this->ServerStartTime = -1.00f;
    this->Seed = -1;
    this->SplineDistance = 0.00f;
    this->CameraAttachment = NULL;
}

void ASBZMovingSecurityCamera::OnRep_ServerStartTime() {
}

void ASBZMovingSecurityCamera::DisableMotionSensor() {
}

void ASBZMovingSecurityCamera::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZMovingSecurityCamera, ServerStartTime);
}


