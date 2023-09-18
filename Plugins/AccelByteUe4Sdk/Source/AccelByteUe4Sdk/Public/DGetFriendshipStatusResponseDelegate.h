#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetFriendshipStatusResponse.h"
#include "DGetFriendshipStatusResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDGetFriendshipStatusResponse, FAccelByteModelsGetFriendshipStatusResponse, Response);

