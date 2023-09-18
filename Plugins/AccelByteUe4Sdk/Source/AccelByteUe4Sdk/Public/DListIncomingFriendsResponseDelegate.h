#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsListIncomingFriendsResponse.h"
#include "DListIncomingFriendsResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDListIncomingFriendsResponse, FAccelByteModelsListIncomingFriendsResponse, Response);

