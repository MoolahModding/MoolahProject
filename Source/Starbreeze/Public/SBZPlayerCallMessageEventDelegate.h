#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerCallEvent.h"
#include "SBZPlayerCallMessageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZPlayerCallMessageEvent, const FSBZPlayerCallEvent&, PlayerCallEventData);

