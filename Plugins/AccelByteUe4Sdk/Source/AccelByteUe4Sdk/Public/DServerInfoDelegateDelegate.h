#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsServerInfo.h"
#include "DServerInfoDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDServerInfoDelegate, FAccelByteModelsServerInfo, Response);

