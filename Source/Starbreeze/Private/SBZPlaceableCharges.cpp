#include "SBZPlaceableCharges.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

ASBZPlaceableCharges::ASBZPlaceableCharges(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("BoxComp"))) {
    this->Tags.AddDefaulted(1);
    this->InitialCharges = 6.00f;
    this->Charges = 0.00f;
    this->bRequiresRelativeLocation = false;
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->OutOfBoundsBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("OutOfBoundsBoxComp"));
    this->CloakerBMMessage = NULL;
    this->PlaceableChargeState = ESBZPlaceableChargeState::None;
    this->PlacedVoiceComment = NULL;
    this->bIsAIPlaced = false;
    this->OutOfBoundsBoxComponent->SetupAttachment(RootComponent);
}

void ASBZPlaceableCharges::Server_SetPlaceableChargeState_Implementation(ESBZPlaceableChargeState NewPlaceableChargeState) {
}

void ASBZPlaceableCharges::Placed() {
}


void ASBZPlaceableCharges::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZPlaceableCharges::OnRep_PlaceableChargeState(ESBZPlaceableChargeState OldPlaceableChargeState) {
}

void ASBZPlaceableCharges::OnRep_Charges(float OldCharges) {
}


void ASBZPlaceableCharges::OnParentActorEndPlay(AActor* OldAttachParentActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}




void ASBZPlaceableCharges::Multicast_SpawnCloakerPlaceable_Implementation() {
}

void ASBZPlaceableCharges::Multicast_SetPlaceableChargeState_Implementation(ESBZPlaceableChargeState NewPlaceableChargeState) {
}

void ASBZPlaceableCharges::Multicast_SetCharges_Implementation(float NewCharges) {
}

void ASBZPlaceableCharges::Multicast_ReachedTargetLocation_Implementation(const FVector& InTargetLocation, const FRotator& InTargetRotation) {
}

void ASBZPlaceableCharges::Multicast_Fall_Implementation(const FVector& InStartLocation, const FVector& InTargetLocation, const FQuat& InTargetQuat) {
}

void ASBZPlaceableCharges::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlaceableCharges, Charges);
    DOREPLIFETIME(ASBZPlaceableCharges, TargetLocation);
    DOREPLIFETIME(ASBZPlaceableCharges, PlaceableChargeState);
}


