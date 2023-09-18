#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAcceptFriendsResponse.h"
#include "DAcceptFriendsResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDAcceptFriendsResponse, FAccelByteModelsAcceptFriendsResponse, Response);

