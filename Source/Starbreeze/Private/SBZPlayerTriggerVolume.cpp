#include "SBZPlayerTriggerVolume.h"
#include "SBZPlayerCharacter.h"

ASBZPlayerTriggerVolume::ASBZPlayerTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->PlayerPawnParentClass = ASBZPlayerCharacter::StaticClass();
    this->bShouldStartEnabled = true;
    this->bDisableWhenPlayerBeginsOverlapping = true;
    this->bDisableWhenAllPlayersAreInside = false;
}

void ASBZPlayerTriggerVolume::SetVolumeEnabled(bool bEnabled) {
}

int32 ASBZPlayerTriggerVolume::GetCurrentNumOverlappingPlayers() const {
    return 0;
}

bool ASBZPlayerTriggerVolume::AreAllPlayerPawnsInside() const {
    return false;
}


