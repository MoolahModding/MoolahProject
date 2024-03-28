#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZPlayerPressedReadyEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZPlayerPressedReadyEvent, const FUniqueNetIdRepl&, PlayerId);

