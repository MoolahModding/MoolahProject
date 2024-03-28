#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetUserGroupInfoResponse.h"
#include "GetUserGroupInfoByUserIdSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserGroupInfoByUserIdSuccess, const FAccelByteModelsGetUserGroupInfoResponse&, Response);

