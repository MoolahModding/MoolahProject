#include "SBZOnlineSlotsSync.h"
#include "Net/UnrealNetwork.h"

ASBZOnlineSlotsSync::ASBZOnlineSlotsSync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnlineSession = NULL;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
}

void ASBZOnlineSlotsSync::UpdatePlayerName(ASBZPlayerState* InPlayerState) {
}

void ASBZOnlineSlotsSync::UpdatePlatform(ASBZPlayerState* InPlayerState) {
}

void ASBZOnlineSlotsSync::UpdateInfamyLevel(ASBZPlayerState* InPlayerState) {
}

void ASBZOnlineSlotsSync::UniqueIdUpdated(ASBZPlayerState* InPlayerState) {
}

void ASBZOnlineSlotsSync::SyncSlotsData() {
}

void ASBZOnlineSlotsSync::OnRep_SlotsData() {
}

void ASBZOnlineSlotsSync::OnRemovePlayerState(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZOnlineSlotsSync::OnGameModeInitialized(AGameModeBase* GameMode) {
}

void ASBZOnlineSlotsSync::OnAddPlayerState(APlayerState* PlayerState) {
}

void ASBZOnlineSlotsSync::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZOnlineSlotsSync, SlotsData);
}


