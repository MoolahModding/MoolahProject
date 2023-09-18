#include "SBZPlayerTriggerVolume.h"
#include "SBZPlayerCharacter.h"

ASBZPlayerTriggerVolume::ASBZPlayerTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerPawnParentClass = ASBZPlayerCharacter::StaticClass();
    this->bShouldStartEnabled = true;
    this->bDisableWhenPlayerBeginsOverlapping = true;
    this->bDisableWhenAllPlayersAreInside = false;
    this->bNetLoadOnClient = false;
    FProperty* p_bActorEnableCollision = GetClass()->FindPropertyByName("bActorEnableCollision");
    *p_bActorEnableCollision->ContainerPtrToValuePtr<uint8>(this) = false;
}

void ASBZPlayerTriggerVolume::SetVolumeEnabled(bool bEnabled) {
}

int32 ASBZPlayerTriggerVolume::GetCurrentNumOverlappingPlayers() const {
    return 0;
}

bool ASBZPlayerTriggerVolume::AreAllPlayerPawnsInside() const {
    return false;
}


