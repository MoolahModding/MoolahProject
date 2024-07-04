#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZOnPlayerToReadyEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnPlayerToReadyEvent, const FUniqueNetIdRepl&, InPlayerId, const FString&, PlayerDisplayName);

