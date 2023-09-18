#include "SBZChat.h"

USBZChat::USBZChat() {
}

void USBZChat::SendSystemChatMessage(UObject* WorldContextObject, const FString& Message) {
}

void USBZChat::SendChatMessage(FSBZChatMessage ChatMessage) {
}

TArray<FSBZWhisperInfo> USBZChat::GetWhisperOptions() {
    return TArray<FSBZWhisperInfo>();
}

bool USBZChat::GetNextWhisperOption(const FUniqueNetIdRepl& CurrentWhisper, FUniqueNetIdRepl& OutNextWhisper, FString& OutNextWhisperName, bool& bOutNoWhisperOptions) {
    return false;
}


