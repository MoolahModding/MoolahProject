#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBlockPlayerResponse.h"
#include "DBlockPlayerResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDBlockPlayerResponse, FAccelByteModelsBlockPlayerResponse, Response);

