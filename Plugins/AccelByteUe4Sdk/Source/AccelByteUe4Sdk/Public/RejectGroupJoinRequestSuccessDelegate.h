#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMemberRequestGroupResponse.h"
#include "RejectGroupJoinRequestSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FRejectGroupJoinRequestSuccess, const FAccelByteModelsMemberRequestGroupResponse&, Response);

