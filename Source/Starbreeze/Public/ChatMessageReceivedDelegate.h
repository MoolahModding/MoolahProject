#pragma once
#include "CoreMinimal.h"
#include "SBZChatMessage.h"
#include "ChatMessageReceivedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChatMessageReceived, const FSBZChatMessage&, NewChatMessage);

