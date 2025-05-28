#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetUserGroupInfoResponse.h"
#include "GetUserGroupInfoSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserGroupInfoSuccess, const FAccelByteModelsGetUserGroupInfoResponse&, Response);

