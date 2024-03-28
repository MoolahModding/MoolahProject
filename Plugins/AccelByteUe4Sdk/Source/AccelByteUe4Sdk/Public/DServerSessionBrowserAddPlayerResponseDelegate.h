#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserAddPlayerResponse.h"
#include "DServerSessionBrowserAddPlayerResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDServerSessionBrowserAddPlayerResponse, FAccelByteModelsSessionBrowserAddPlayerResponse, Response);

