#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPersonalMessageResponse.h"
#include "DPersonalChatResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPersonalChatResponse, FAccelByteModelsPersonalMessageResponse, Response);

