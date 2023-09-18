#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsKickGroupMemberResponse.h"
#include "KickGroupMemberSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FKickGroupMemberSuccess, const FAccelByteModelsKickGroupMemberResponse&, Response);

