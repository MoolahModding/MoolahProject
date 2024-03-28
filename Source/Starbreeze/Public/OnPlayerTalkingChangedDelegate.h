#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnPlayerTalkingChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerTalkingChanged, FUniqueNetIdRepl, PlayerId, bool, IsTalking);

