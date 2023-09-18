#include "SBZPlaceableWeapon.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ASBZPlaceableWeapon::ASBZPlaceableWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USceneComponent>(TEXT("RootComponent"))) {
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->BaseMesh->SetupAttachment(RootComponent);
    this->WeaponMarker = NULL;
    this->bDestroyOnInteraction = false;
    this->bIsInventory = false;
}

void ASBZPlaceableWeapon::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZPlaceableWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlaceableWeapon, StoredWeaponConfig);
}


