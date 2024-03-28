#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetMemberRequestsListResponse.h"
#include "GetGroupInvitationRequestsSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGetGroupInvitationRequestsSuccess, const FAccelByteModelsGetMemberRequestsListResponse&, Response);

