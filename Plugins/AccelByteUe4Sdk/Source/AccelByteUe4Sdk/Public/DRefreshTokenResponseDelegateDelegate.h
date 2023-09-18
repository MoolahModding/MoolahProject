#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRefreshTokenResponse.h"
#include "DRefreshTokenResponseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDRefreshTokenResponseDelegate, FAccelByteModelsRefreshTokenResponse, Response);

