#pragma once
#include "CoreMinimal.h"
#include "ESBZChatCommandTypes.generated.h"

UENUM(BlueprintType)
enum class ESBZChatCommandTypes : uint8 {
    CommandWhisperTo,
    CommandPartyChat,
    CommandGroupChat,
    CommandInvitePlayer,
    CommandVoteKick,
    CommandMute,
};

