#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetGroupMemberListResponse.h"
#include "GetMyJoinedGroupInfoSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGetMyJoinedGroupInfoSuccess, const FAccelByteModelsGetGroupMemberListResponse&, Response);

