#include "SBZPlaceableDroppedWeapon.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASBZPlaceableDroppedWeapon::ASBZPlaceableDroppedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->WeaponPoint->SetupAttachment(BaseMesh);
    this->AttachedWeapon = NULL;
    this->AmmoLoadedLeft = 0;
    this->AmmoInventoryLeft = 0;
    this->bDestroyOnInteraction = true;
}

void ASBZPlaceableDroppedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlaceableDroppedWeapon, AmmoLoadedLeft);
    DOREPLIFETIME(ASBZPlaceableDroppedWeapon, AmmoInventoryLeft);
}


