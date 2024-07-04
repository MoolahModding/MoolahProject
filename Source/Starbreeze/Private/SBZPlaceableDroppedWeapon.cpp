#include "SBZPlaceableDroppedWeapon.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASBZPlaceableDroppedWeapon::ASBZPlaceableDroppedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDestroyOnInteraction = true;
    this->WeaponPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->AttachedWeapon = NULL;
    this->AmmoLoadedLeft = 0;
    this->AmmoInventoryLeft = 0;
    this->WeaponPoint->SetupAttachment(BaseMesh);
}

void ASBZPlaceableDroppedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlaceableDroppedWeapon, AmmoLoadedLeft);
    DOREPLIFETIME(ASBZPlaceableDroppedWeapon, AmmoInventoryLeft);
}


