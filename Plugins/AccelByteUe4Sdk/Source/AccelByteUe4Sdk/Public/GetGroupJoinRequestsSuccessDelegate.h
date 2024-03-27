#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetMemberRequestsListResponse.h"
#include "GetGroupJoinRequestsSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGetGroupJoinRequestsSuccess, const FAccelByteModelsGetMemberRequestsListResponse&, Response);

