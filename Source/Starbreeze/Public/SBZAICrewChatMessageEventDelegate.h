#pragma once
#include "CoreMinimal.h"
#include "SBZAICrewChatEvent.h"
#include "SBZAICrewChatMessageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZAICrewChatMessageEvent, const FSBZAICrewChatEvent&, ChatEventData);

