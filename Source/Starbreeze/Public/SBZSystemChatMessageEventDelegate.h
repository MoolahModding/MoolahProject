#pragma once
#include "CoreMinimal.h"
#include "SBZSystemChatEvent.h"
#include "SBZSystemChatMessageEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZSystemChatMessageEvent, const FSBZSystemChatEvent&, ChatEventData);

