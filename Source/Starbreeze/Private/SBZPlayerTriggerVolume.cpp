#include "SBZPlayerTriggerVolume.h"
#include "SBZPlayerCharacter.h"

void ASBZPlayerTriggerVolume::SetVolumeEnabled(bool bEnabled) {
}

int32 ASBZPlayerTriggerVolume::GetCurrentNumOverlappingPlayers() const {
    return 0;
}

bool ASBZPlayerTriggerVolume::AreAllPlayerPawnsInside() const {
    return false;
}

ASBZPlayerTriggerVolume::ASBZPlayerTriggerVolume() {
    this->PlayerPawnParentClass = ASBZPlayerCharacter::StaticClass();
    this->bShouldStartEnabled = true;
    this->bDisableWhenPlayerBeginsOverlapping = true;
    this->bDisableWhenAllPlayersAreInside = false;
}

