#include "SBZPlaceableWeapon.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ASBZPlaceableWeapon::ASBZPlaceableWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USceneComponent>(TEXT("RootComponent"))) {
    this->bIsInventory = false;
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->WeaponMarker = NULL;
    this->bDestroyOnInteraction = false;
    this->BaseMesh->SetupAttachment(RootComponent);
}

void ASBZPlaceableWeapon::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZPlaceableWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlaceableWeapon, StoredWeaponConfig);
}


