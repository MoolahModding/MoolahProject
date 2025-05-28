#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRejectFriendsResponse.h"
#include "DRejectFriendsResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDRejectFriendsResponse, FAccelByteModelsRejectFriendsResponse, Response);

