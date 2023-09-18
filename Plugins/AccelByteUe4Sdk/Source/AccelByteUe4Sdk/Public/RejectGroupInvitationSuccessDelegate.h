#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMemberRequestGroupResponse.h"
#include "RejectGroupInvitationSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRejectGroupInvitationSuccess, const FAccelByteModelsMemberRequestGroupResponse&, Response);

