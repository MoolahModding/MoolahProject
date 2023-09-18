#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsWalletInfoResponse.h"
#include "DAccelByteModelsWalletInfosResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDAccelByteModelsWalletInfosResponse, FAccelByteModelsWalletInfoResponse, Response);

