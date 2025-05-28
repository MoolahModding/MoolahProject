#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsCancelFriendsResponse.h"
#include "DCancelFriendsResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDCancelFriendsResponse, FAccelByteModelsCancelFriendsResponse, Response);

