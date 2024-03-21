#include "SBZPlayerControllerBase.h"

void ASBZPlayerControllerBase::Server_SetLoadout_Implementation(const FPD3PlayerLoadout& Loadout) {
}
bool ASBZPlayerControllerBase::Server_SetLoadout_Validate(const FPD3PlayerLoadout& Loadout) {
    return true;
}

void ASBZPlayerControllerBase::Server_SetAccelByteSessionInformation_Implementation(const FString& InAccelByteUserId, const FString& InSessionId) {
}

ASBZPlayerControllerBase::ASBZPlayerControllerBase() {
    this->SBZPlayerState = NULL;
}

