#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsListBlockedUserResponse.h"
#include "DListOfBlockedUserResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDListOfBlockedUserResponse, FAccelByteModelsListBlockedUserResponse, Response);

