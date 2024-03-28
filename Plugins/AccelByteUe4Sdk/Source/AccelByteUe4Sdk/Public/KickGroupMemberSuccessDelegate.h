#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsKickGroupMemberResponse.h"
#include "KickGroupMemberSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FKickGroupMemberSuccess, const FAccelByteModelsKickGroupMemberResponse&, Response);

