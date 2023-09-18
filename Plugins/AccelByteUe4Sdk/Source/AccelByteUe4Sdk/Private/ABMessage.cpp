#include "ABMessage.h"

UABMessage::UABMessage() {
}

void UABMessage::SetPrivateMessageNotifDelegate(FDPersonalChatNotif OnNotif) {
}

void UABMessage::SetMessageNotifDelegate(FDMessageNotif OnNotif) {
}

void UABMessage::SetChannelMessageNotifDelegate(FDChannelChatNotif OnNotif) {
}

FString UABMessage::SendPrivateMessage(const FSendPrivateMessageRequest& Request, FDPersonalChatResponse OnResponse, FDErrorHandler OnError) {
    return TEXT("");
}

void UABMessage::SendPing() {
}

FString UABMessage::SendPartyMessage(const FSendPartyMessageRequest& Request, FDPartyChatResponse OnResponse, FDErrorHandler OnError) {
    return TEXT("");
}

FString UABMessage::SendJoinDefaultChannelChatRequest(FDJoinDefaultChannelChatResponse OnResponse, FDErrorHandler OnError) {
    return TEXT("");
}

FString UABMessage::SendChannelMessage(const FSendChannelMessageRequest& Request, FDChannelChatResponse OnResponse, FDErrorHandler OnError) {
    return TEXT("");
}


