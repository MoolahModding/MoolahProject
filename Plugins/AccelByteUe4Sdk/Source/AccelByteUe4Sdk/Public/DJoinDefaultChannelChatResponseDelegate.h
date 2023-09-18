#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsJoinDefaultChannelResponse.h"
#include "DJoinDefaultChannelChatResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDJoinDefaultChannelChatResponse, FAccelByteModelsJoinDefaultChannelResponse, Response);

