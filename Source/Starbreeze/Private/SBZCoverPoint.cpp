#include "SBZCoverPoint.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ASBZCoverPoint::ASBZCoverPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlockingCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockingCollision"));
    this->BlockingCollision->SetupAttachment(RootComponent);
    this->AIVisibilityNodeComputationFrequency = ESBZAIVisibilityNodeComputationFrequency::Once;
    this->LinkRadius = 0.00f;
    this->CurrentRoom = NULL;
    this->ValidShootingPoints = 0;
    this->bManualRegistering = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

bool ASBZCoverPoint::Reserve(AActor* ForActor) {
    return false;
}

void ASBZCoverPoint::OnOccupantKilled(APawn* Pawn) {
}

void ASBZCoverPoint::OnBlockerKilled(APawn* Pawn) {
}

bool ASBZCoverPoint::Occupy(AActor* OccupyingActor) {
    return false;
}

bool ASBZCoverPoint::IsStandingCover() const {
    return false;
}

bool ASBZCoverPoint::IsReserved(AActor* ForActor) const {
    return false;
}

bool ASBZCoverPoint::IsRegistered() const {
    return false;
}

bool ASBZCoverPoint::IsOccupied() const {
    return false;
}

bool ASBZCoverPoint::IsLowCover() const {
    return false;
}

bool ASBZCoverPoint::IsFree(AActor* ForActor) const {
    return false;
}

bool ASBZCoverPoint::IsCrouchingCover() const {
    return false;
}

bool ASBZCoverPoint::IsComputed() const {
    return false;
}

bool ASBZCoverPoint::IsBlockedBy(AActor* Actor) {
    return false;
}

bool ASBZCoverPoint::IsBlocked(AActor* ForActor) const {
    return false;
}

bool ASBZCoverPoint::HasShootingPointLOS_Synchronously(ESBZShootingPointType ShootingPoint, AActor* TargetActor) const {
    return false;
}

bool ASBZCoverPoint::HasAnyShootingPointLOS_Synchronously(AActor* TargetActor) const {
    return false;
}

uint8 ASBZCoverPoint::GetValidShootingPoints() const {
    return 0;
}

AActor* ASBZCoverPoint::GetReservedForActor() const {
    return NULL;
}

AActor* ASBZCoverPoint::GetOccupant() const {
    return NULL;
}

void ASBZCoverPoint::ComputeValidShootingPoints(const TArray<FSBZCoverShootingPoints>& ShootingPoints, bool bUseAIVisibilityPayloadCenterAsLocation) {
}

void ASBZCoverPoint::CancelReservation(AActor* ForActor) {
}

void ASBZCoverPoint::BlockingActorLeft(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZCoverPoint::BlockingActorEntered(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ASBZCoverPoint::Abandon(AActor* OccupyingActor) {
    return false;
}


