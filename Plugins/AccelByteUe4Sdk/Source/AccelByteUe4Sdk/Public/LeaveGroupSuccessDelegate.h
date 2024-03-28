#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMemberRequestGroupResponse.h"
#include "LeaveGroupSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaveGroupSuccess, const FAccelByteModelsMemberRequestGroupResponse&, Response);

