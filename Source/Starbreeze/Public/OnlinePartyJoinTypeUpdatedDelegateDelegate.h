#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineJoinType.h"
#include "OnlinePartyJoinTypeUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnlinePartyJoinTypeUpdatedDelegate, ESBZOnlineJoinType, NewJoinType);

