#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetGroupListResponse.h"
#include "GetGroupsByGroupIdsSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGetGroupsByGroupIdsSuccess, const FAccelByteModelsGetGroupListResponse&, Response);

