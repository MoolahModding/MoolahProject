#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRequestFriendsResponse.h"
#include "DRequestFriendsResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDRequestFriendsResponse, FAccelByteModelsRequestFriendsResponse, Response);

