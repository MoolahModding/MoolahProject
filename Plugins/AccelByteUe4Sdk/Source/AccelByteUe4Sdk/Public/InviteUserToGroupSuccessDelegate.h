#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMemberRequestGroupResponse.h"
#include "InviteUserToGroupSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FInviteUserToGroupSuccess, const FAccelByteModelsMemberRequestGroupResponse&, Response);

