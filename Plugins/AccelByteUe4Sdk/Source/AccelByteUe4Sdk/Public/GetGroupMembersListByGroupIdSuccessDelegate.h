#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetGroupMemberListResponse.h"
#include "GetGroupMembersListByGroupIdSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGetGroupMembersListByGroupIdSuccess, const FAccelByteModelsGetGroupMemberListResponse&, Response);

