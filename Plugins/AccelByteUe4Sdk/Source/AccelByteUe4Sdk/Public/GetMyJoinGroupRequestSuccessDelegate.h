#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetMemberRequestsListResponse.h"
#include "GetMyJoinGroupRequestSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGetMyJoinGroupRequestSuccess, const FAccelByteModelsGetMemberRequestsListResponse&, Response);

