#pragma once
#include "CoreMinimal.h"
#include "ESBZServiceStatus.h"
#include "SBZOnNetworkStatusDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnNetworkStatusDelegate, ESBZServiceStatus, ZServiceStatus);

