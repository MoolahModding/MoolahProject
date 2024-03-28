#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMemberRequestGroupResponse.h"
#include "CancelJoinGroupRequestSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FCancelJoinGroupRequestSuccess, const FAccelByteModelsMemberRequestGroupResponse&, Response);

