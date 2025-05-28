#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLoadFriendListResponse.h"
#include "DLoadFriendListResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDLoadFriendListResponse, FAccelByteModelsLoadFriendListResponse, Response);

