#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerChatEvent.h"
#include "SBZPlayerChatMessageEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZPlayerChatMessageEvent, const FSBZPlayerChatEvent&, ChatEventData);

