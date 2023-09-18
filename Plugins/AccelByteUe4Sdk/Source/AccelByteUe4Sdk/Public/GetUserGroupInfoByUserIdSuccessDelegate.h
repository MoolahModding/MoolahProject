#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetUserGroupInfoResponse.h"
#include "GetUserGroupInfoByUserIdSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserGroupInfoByUserIdSuccess, const FAccelByteModelsGetUserGroupInfoResponse&, Response);

