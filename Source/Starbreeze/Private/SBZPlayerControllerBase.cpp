#include "SBZPlayerControllerBase.h"
#include "SBZBasePlayerCameraManager.h"
#include "SBZCheatManagerBase.h"

ASBZPlayerControllerBase::ASBZPlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = ASBZBasePlayerCameraManager::StaticClass();
    this->CheatClass = USBZCheatManagerBase::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->SBZPlayerState = NULL;
    this->bIsPausedPreferred = false;
}

void ASBZPlayerControllerBase::SetPausedPreferred(bool bIsPaused) {
}

void ASBZPlayerControllerBase::Server_SetPausedPreferred_Implementation(bool bInIsPaused) {
}

void ASBZPlayerControllerBase::Server_SetLoadout_Implementation(const FPD3PlayerLoadout& Loadout) {
}
bool ASBZPlayerControllerBase::Server_SetLoadout_Validate(const FPD3PlayerLoadout& Loadout) {
    return true;
}

void ASBZPlayerControllerBase::Server_SetAccelByteSessionInformation_Implementation(const FString& InAccelByteUserId, const FString& InSessionId, const ESBZFirstPartyPlatform FirstPartyPlatform) {
}

bool ASBZPlayerControllerBase::IsPausedPreferred() const {
    return false;
}

bool ASBZPlayerControllerBase::BP_IsPaused() const {
    return false;
}


