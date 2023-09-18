#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMemberRequestGroupResponse.h"
#include "RejectGroupJoinRequestSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRejectGroupJoinRequestSuccess, const FAccelByteModelsMemberRequestGroupResponse&, Response);

