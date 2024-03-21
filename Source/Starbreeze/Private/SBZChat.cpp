#include "SBZChat.h"

void USBZChat::SendSystemChatMessage(UObject* WorldContextObject, const FString& Message) {
}

void USBZChat::SendSessionMessage(const FSBZChatMessage& InMessage) {
}

void USBZChat::SendChatMessage(FSBZChatMessage ChatMessage) {
}

void USBZChat::OnSessionMessageReceived(const FAccelByteModelsChatNotif& Result) {
}

bool USBZChat::IsMuted(FUniqueNetIdRepl UniqueNetId) {
    return false;
}

TArray<FSBZWhisperInfo> USBZChat::GetWhisperOptions() {
    return TArray<FSBZWhisperInfo>();
}

bool USBZChat::GetNextWhisperOption(const FUniqueNetIdRepl& CurrentWhisper, FUniqueNetIdRepl& OutNextWhisper, FString& OutNextWhisperName, bool& bOutNoWhisperOptions) {
    return false;
}

USBZChat* USBZChat::GetChat(UObject* WorldContextObject) {
    return NULL;
}

USBZChat::USBZChat() {
}

