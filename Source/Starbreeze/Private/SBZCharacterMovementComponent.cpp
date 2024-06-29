#include "SBZCharacterMovementComponent.h"

USBZCharacterMovementComponent::USBZCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AgilityTrajectoryQueryParams = NULL;
    this->AgilitySlideParams = NULL;
    this->CurrentZipline = NULL;
    this->CurrentControlsReferenceID = -1;
    this->ZiplineParams = NULL;
    this->MaxRunSpeed = 800.00f;
    this->MaxTargetingSpeed = 185.00f;
    this->MaxHSInstigatorTargetingSpeed = 185.00f;
    this->MaxHSInstigatorWalkingSpeed = 185.00f;
    this->StandingHalfHeight = 174.00f;
    this->TraversingHalfHeight = 50.00f;
    this->TraversingMaxAngle = 60.00f;
    this->CharacterMovementState = ESBZCharacterMovementState::Walking;
    this->SBZCharacterOwner = NULL;
}

void USBZCharacterMovementComponent::Server_StopZipline_Implementation(const bool bWasCancelled) {
}

void USBZCharacterMovementComponent::Server_StopSlide_Implementation() {
}
bool USBZCharacterMovementComponent::Server_StopSlide_Validate() {
    return true;
}

void USBZCharacterMovementComponent::Server_StartZipline_Implementation(ASBZZipline* InZipline, const bool bIsMovingZiplineForward, const float InTimeOnZipline) {
}

void USBZCharacterMovementComponent::Server_StartTraversal_Implementation(const FSBZMinimalAgilityTraversalTrajectory& MinimalTrajectory) {
}
bool USBZCharacterMovementComponent::Server_StartTraversal_Validate(const FSBZMinimalAgilityTraversalTrajectory& MinimalTrajectory) {
    return true;
}

void USBZCharacterMovementComponent::Server_StartSlide_Implementation(const FVector& InSlideDirection, const FVector& InEndSlideLocation) {
}
bool USBZCharacterMovementComponent::Server_StartSlide_Validate(const FVector& InSlideDirection, const FVector& InEndSlideLocation) {
    return true;
}

void USBZCharacterMovementComponent::NetMulticast_StopTraversal_Implementation() {
}

void USBZCharacterMovementComponent::NetMulticast_StopSlide_Implementation() {
}

void USBZCharacterMovementComponent::NetMulticast_StartTraversal_Implementation(const FSBZMinimalAgilityTraversalTrajectory& MinimalTrajectory) {
}

void USBZCharacterMovementComponent::NetMulticast_StartSlide_Implementation(const FVector& InSlideDirection, const FVector& InEndSlideLocation) {
}

void USBZCharacterMovementComponent::Multicast_StopZipline_Implementation(const bool bWasCancelled) {
}

void USBZCharacterMovementComponent::Multicast_StartZipline_Implementation(ASBZZipline* InZipline, const bool bIsMovingZiplineForward, const float InTimeOnZipline) {
}


