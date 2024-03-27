#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCResponse.h"
#include "DModelsUGCServerResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUGCServerResponse, FAccelByteModelsUGCResponse, Response);

