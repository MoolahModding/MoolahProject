#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsWalletInfo.h"
#include "DAccelByteModelsWalletInfoResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDAccelByteModelsWalletInfoResponse, FAccelByteModelsWalletInfo, Response);

