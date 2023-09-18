#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "SBZNewsFeedList.h"
#include "OnOnlineGetNewsFeedEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOnlineGetNewsFeedEventDelegate, ESBZOnlineCode, ErrorCode, const FSBZNewsFeedList&, NewsFeedList);

