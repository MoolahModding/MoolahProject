#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsListOutgoingFriendsResponse.h"
#include "DListOutgoingFriendsResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDListOutgoingFriendsResponse, FAccelByteModelsListOutgoingFriendsResponse, Response);

