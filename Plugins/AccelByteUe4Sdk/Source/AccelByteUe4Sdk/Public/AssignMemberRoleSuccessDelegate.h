#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetUserGroupInfoResponse.h"
#include "AssignMemberRoleSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAssignMemberRoleSuccess, const FAccelByteModelsGetUserGroupInfoResponse&, Response);

