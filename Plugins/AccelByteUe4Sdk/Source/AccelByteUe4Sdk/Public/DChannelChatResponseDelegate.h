#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChannelMessageResponse.h"
#include "DChannelChatResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDChannelChatResponse, FAccelByteModelsChannelMessageResponse, Response);

