#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMemberRequestGroupResponse.h"
#include "AcceptGroupJoinRequestSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FAcceptGroupJoinRequestSuccess, const FAccelByteModelsMemberRequestGroupResponse&, Response);

