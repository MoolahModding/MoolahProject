#include "SBZPlaceableCharges.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

ASBZPlaceableCharges::ASBZPlaceableCharges(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialCharges = 6.00f;
    this->Charges = 0.00f;
    this->bRequiresRelativeLocation = false;
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->OutOfBoundsBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("OutOfBoundsBoxComp"));
    this->OutOfBoundsBoxComponent->SetupAttachment(BoxComponent);
    this->CloakerBMMessage = NULL;
    this->CloakerBMMessage = NULL;
    this->PlaceableChargeState = ESBZPlaceableChargeState::None;
    this->PlacedVoiceComment = NULL;
    this->bIsAIPlaced = false;
    FProperty* p_bReplicateMovement = GetClass()->FindPropertyByName("bReplicateMovement");
    *p_bReplicateMovement->ContainerPtrToValuePtr<uint8>(this) = true;
    this->RootComponent = BoxComponent;
    this->Tags.AddDefaulted(1);
}

void ASBZPlaceableCharges::Server_SetPlaceableChargeState_Implementation(ESBZPlaceableChargeState NewPlaceableChargeState) {
}


void ASBZPlaceableCharges::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZPlaceableCharges::OnRep_TargetLocation() {
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

void ASBZPlaceableCharges::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlaceableCharges, Charges);
    DOREPLIFETIME(ASBZPlaceableCharges, TargetLocation);
    DOREPLIFETIME(ASBZPlaceableCharges, PlaceableChargeState);
}


