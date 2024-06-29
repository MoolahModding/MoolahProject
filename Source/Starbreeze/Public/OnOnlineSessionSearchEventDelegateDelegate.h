#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "SBZOnlineSearchResult.h"
#include "OnOnlineSessionSearchEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOnlineSessionSearchEventDelegate, ESBZOnlineCode, ErrorCode, const TArray<FSBZOnlineSearchResult>&, Results);

