#include "SBZChatReplicatedProxy.h"

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

ASBZChatReplicatedProxy::ASBZChatReplicatedProxy() {
}

