#include "SBZKickingReplicatedProxy.h"

ASBZKickingReplicatedProxy::ASBZKickingReplicatedProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
}

void ASBZKickingReplicatedProxy::VoteToKick_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick) {
}
bool ASBZKickingReplicatedProxy::VoteToKick_Validate(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick) {
    return true;
}

void ASBZKickingReplicatedProxy::ServerSendKickingInfo_Implementation(FSBZKickingInfo NewKickingInfo) {
}
bool ASBZKickingReplicatedProxy::ServerSendKickingInfo_Validate(FSBZKickingInfo NewKickingInfo) {
    return true;
}

void ASBZKickingReplicatedProxy::OnKicked_Implementation(FSBZKickingInfo NewKickingInfo) {
}
bool ASBZKickingReplicatedProxy::OnKicked_Validate(FSBZKickingInfo NewKickingInfo) {
    return true;
}

void ASBZKickingReplicatedProxy::MulticastReceiveKickingInfo_Implementation(const FSBZKickingInfo& NewKickingInfo) {
}
bool ASBZKickingReplicatedProxy::MulticastReceiveKickingInfo_Validate(const FSBZKickingInfo& NewKickingInfo) {
    return true;
}

void ASBZKickingReplicatedProxy::KickPlayerFinal_Implementation(FUniqueNetIdRepl PlayerIdToKick, ESBZKickingMode ModeKick) {
}
bool ASBZKickingReplicatedProxy::KickPlayerFinal_Validate(FUniqueNetIdRepl PlayerIdToKick, ESBZKickingMode ModeKick) {
    return true;
}

void ASBZKickingReplicatedProxy::KickFailed_Implementation(FUniqueNetIdRepl PlayerProposed, ESBZKickingError ErrorCode) {
}
bool ASBZKickingReplicatedProxy::KickFailed_Validate(FUniqueNetIdRepl PlayerProposed, ESBZKickingError ErrorCode) {
    return true;
}

void ASBZKickingReplicatedProxy::InitiateKicking_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick) {
}
bool ASBZKickingReplicatedProxy::InitiateKicking_Validate(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick) {
    return true;
}


