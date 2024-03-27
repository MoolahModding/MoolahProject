#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChannelMessageResponse.h"
#include "DChannelChatResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDChannelChatResponse, FAccelByteModelsChannelMessageResponse, Response);

