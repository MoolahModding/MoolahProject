#include "SBZChatReplicatedProxy.h"

ASBZChatReplicatedProxy::ASBZChatReplicatedProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
}

void ASBZChatReplicatedProxy::ServerSendChatMessage_Implementation(const FSBZChatMessage& Message) {
}
bool ASBZChatReplicatedProxy::ServerSendChatMessage_Validate(const FSBZChatMessage& Message) {
    return true;
}

void ASBZChatReplicatedProxy::MulticastReceiveChatMessage_Implementation(const FSBZChatMessage& Message) {
}
bool ASBZChatReplicatedProxy::MulticastReceiveChatMessage_Validate(const FSBZChatMessage& Message) {
    return true;
}

void ASBZChatReplicatedProxy::ClientSendChatMessage_Implementation(const FSBZChatMessage& Message) {
}
bool ASBZChatReplicatedProxy::ClientSendChatMessage_Validate(const FSBZChatMessage& Message) {
    return true;
}


