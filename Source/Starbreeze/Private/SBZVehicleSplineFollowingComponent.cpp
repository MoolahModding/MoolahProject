#include "SBZVehicleSplineFollowingComponent.h"
#include "Net/UnrealNetwork.h"

USBZVehicleSplineFollowingComponent::USBZVehicleSplineFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VehicleManager = NULL;
    this->TargetSpeed = 0.00f;
    this->Speed = 0.00f;
    this->StopBeginSpeed = 0.00f;
    this->StopBeginDistance = 0.00f;
    this->StopEndDistance = 0.00f;
    this->DecelDuration = 0.00f;
    this->DecelTime = 0.00f;
    this->CruisingSpeed = 30.00f;
    this->TurnCruisingSpeed = 15.00f;
    this->Acceleration = 500.00f;
    this->Deceleration = -1500.00f;
    this->bIsStopping = false;
    this->bIsStopRequestedByUser = false;
}

void USBZVehicleSplineFollowingComponent::Stop() {
}

void USBZVehicleSplineFollowingComponent::Start() {
}

void USBZVehicleSplineFollowingComponent::SetPathSpline(ASBZSpline* Spline) {
}

void USBZVehicleSplineFollowingComponent::SetPath(const TArray<ASBZSpline*>& Path, bool bTeleportToPathStart) {
}

void USBZVehicleSplineFollowingComponent::SetDeceleration(float InDeceleration) {
}

void USBZVehicleSplineFollowingComponent::SetCruisingSpeed(float NewSpeed, bool bForceUpdateTargetSpeed) {
}

void USBZVehicleSplineFollowingComponent::SetAcceleration(float InAcceleration) {
}

void USBZVehicleSplineFollowingComponent::PushPathSpline(ASBZSpline* Spline) {
}

void USBZVehicleSplineFollowingComponent::PushPath(const TArray<ASBZSpline*>& Path) {
}

void USBZVehicleSplineFollowingComponent::Multicast_StopAtDistance_Implementation(float Distance, bool bRequestedByUser) {
}

void USBZVehicleSplineFollowingComponent::Multicast_Start_Implementation() {
}

void USBZVehicleSplineFollowingComponent::Multicast_SetPathSpline_Implementation(ASBZSpline* InPath) {
}

void USBZVehicleSplineFollowingComponent::Multicast_SetPath_Implementation(const TArray<ASBZSpline*>& InPath, bool bTeleportToPathStart) {
}

void USBZVehicleSplineFollowingComponent::Multicast_SetDeceleration_Implementation(float ServerCurrentSpeed, const TArray<ASBZSpline*>& InServerPath, float InServerTraveledDistance, float InDeceleration) {
}

void USBZVehicleSplineFollowingComponent::Multicast_SetCruisingSpeed_Implementation(float ServerCurrentSpeed, const TArray<ASBZSpline*>& InServerPath, float InServerTraveledDistance, float InSpeed, bool bForceUpdateTargetSpeed) {
}

void USBZVehicleSplineFollowingComponent::Multicast_SetAcceleration_Implementation(float ServerCurrentSpeed, const TArray<ASBZSpline*>& InServerPath, float InServerTraveledDistance, float InAcceleration) {
}

void USBZVehicleSplineFollowingComponent::Multicast_PushPathSpline_Implementation(ASBZSpline* InPath) {
}

void USBZVehicleSplineFollowingComponent::Multicast_PushPath_Implementation(const TArray<ASBZSpline*>& InPath) {
}

void USBZVehicleSplineFollowingComponent::Multicast_OnStopped_Implementation(ASBZSpline* Spline, float Distance) {
}

void USBZVehicleSplineFollowingComponent::Multicast_OnStarted_Implementation() {
}

void USBZVehicleSplineFollowingComponent::Multicast_OnSplineLeft_Implementation(ASBZSpline* Spline) {
}

void USBZVehicleSplineFollowingComponent::Multicast_OnSplineEntered_Implementation(ASBZSpline* Spline, bool bPathEntered, bool bTeleportToPathStart) {
}

void USBZVehicleSplineFollowingComponent::Multicast_OnSplineEndReached_Implementation(ASBZSpline* Spline) {
}

void USBZVehicleSplineFollowingComponent::Multicast_OnPathEndReached_Implementation() {
}

void USBZVehicleSplineFollowingComponent::Multicast_OnBeginStop_Implementation() {
}

bool USBZVehicleSplineFollowingComponent::IsStopping() const {
    return false;
}

bool USBZVehicleSplineFollowingComponent::IsStopped() const {
    return false;
}

float USBZVehicleSplineFollowingComponent::GetSpeed() const {
    return 0.0f;
}

float USBZVehicleSplineFollowingComponent::GetPathLength() const {
    return 0.0f;
}

TArray<ASBZSpline*> USBZVehicleSplineFollowingComponent::GetPath() const {
    return TArray<ASBZSpline*>();
}

ASBZSpline* USBZVehicleSplineFollowingComponent::GetNextSpline() const {
    return NULL;
}

ASBZSpline* USBZVehicleSplineFollowingComponent::GetLastSpline() const {
    return NULL;
}

TArray<ASBZSpline*> USBZVehicleSplineFollowingComponent::GetFullPath() const {
    return TArray<ASBZSpline*>();
}

ASBZSpline* USBZVehicleSplineFollowingComponent::GetCurrentSpline() const {
    return NULL;
}

float USBZVehicleSplineFollowingComponent::GetBrakingDistance(bool bMaxBraking) const {
    return 0.0f;
}

void USBZVehicleSplineFollowingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, ReplicatedProperties);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, TargetSpeed);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, Speed);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, StopBeginSpeed);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, StopBeginDistance);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, StopEndDistance);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, DecelDuration);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, DecelTime);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, CruisingSpeed);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, TurnCruisingSpeed);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, Acceleration);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, Deceleration);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, bIsStopping);
    DOREPLIFETIME(USBZVehicleSplineFollowingComponent, bIsStopRequestedByUser);
}


