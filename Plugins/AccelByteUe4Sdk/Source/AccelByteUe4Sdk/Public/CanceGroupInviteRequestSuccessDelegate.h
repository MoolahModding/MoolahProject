#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMemberRequestGroupResponse.h"
#include "CanceGroupInviteRequestSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCanceGroupInviteRequestSuccess, const FAccelByteModelsMemberRequestGroupResponse&, Response);

