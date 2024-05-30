#pragma once
#include "CoreMinimal.h"
#include "SBZSystemChatEvent.h"
#include "SBZSystemChatMessageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZSystemChatMessageEvent, const FSBZSystemChatEvent&, ChatEventData);

