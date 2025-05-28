#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMemberRequestGroupResponse.h"
#include "AcceptGroupInvitationSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAcceptGroupInvitationSuccess, const FAccelByteModelsMemberRequestGroupResponse&, Response);

