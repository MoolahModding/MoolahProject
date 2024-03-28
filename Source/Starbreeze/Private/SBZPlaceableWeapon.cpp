#include "SBZPlaceableWeapon.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

void ASBZPlaceableWeapon::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZPlaceableWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlaceableWeapon, StoredWeaponConfig);
}

ASBZPlaceableWeapon::ASBZPlaceableWeapon() {
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->WeaponMarker = NULL;
    this->bDestroyOnInteraction = false;
}

