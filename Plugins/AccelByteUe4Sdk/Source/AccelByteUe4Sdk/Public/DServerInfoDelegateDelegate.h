#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsServerInfo.h"
#include "DServerInfoDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDServerInfoDelegate, FAccelByteModelsServerInfo, Response);

