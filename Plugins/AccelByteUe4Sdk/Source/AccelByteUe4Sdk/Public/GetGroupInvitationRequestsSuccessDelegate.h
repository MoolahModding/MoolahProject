#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetMemberRequestsListResponse.h"
#include "GetGroupInvitationRequestsSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FGetGroupInvitationRequestsSuccess, const FAccelByteModelsGetMemberRequestsListResponse&, Response);

