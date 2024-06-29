#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsQosServerList.h"
#include "ESBZOnlineCode.h"
#include "OnOnlineGetRegionsEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOnlineGetRegionsEventDelegate, ESBZOnlineCode, ErrorCode, const FAccelByteModelsQosServerList&, Regions);

