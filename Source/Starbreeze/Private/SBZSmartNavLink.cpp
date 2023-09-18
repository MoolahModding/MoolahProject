#include "SBZSmartNavLink.h"
#include "Components/SceneComponent.h"

ASBZSmartNavLink::ASBZSmartNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableNavLinkWhenUsed = true;
    this->bCanBeBlocked = true;
    this->NavLinkUserId = 0;
    this->bCustomMove = false;
    this->bLinkEnabled = true;
    this->bLinkBlocked = false;
    this->bLinkInUse = false;
    this->AllowedBlockingCharacter = NULL;
    this->AllowedBlockingController = NULL;
    this->SpriteComponent = NULL;
    FProperty* p_bHidden = GetClass()->FindPropertyByName("bHidden");
    *p_bHidden->ContainerPtrToValuePtr<uint8>(this) = true;
    FProperty* p_bCanBeDamaged = GetClass()->FindPropertyByName("bCanBeDamaged");
    *p_bCanBeDamaged->ContainerPtrToValuePtr<uint8>(this) = false;
    FProperty* p_bActorEnableCollision = GetClass()->FindPropertyByName("bActorEnableCollision");
    *p_bActorEnableCollision->ContainerPtrToValuePtr<uint8>(this) = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZSmartNavLink::SetNavArea(UClass* AreaClass) {
}

void ASBZSmartNavLink::SetLinkEnabled(bool bInLinkEnabled) {
}

bool ASBZSmartNavLink::IsLinkEnabled() const {
    return false;
}

UClass* ASBZSmartNavLink::GetNavArea() const {
    return NULL;
}


