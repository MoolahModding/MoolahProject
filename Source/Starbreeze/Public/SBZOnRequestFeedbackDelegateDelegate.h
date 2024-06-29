#pragma once
#include "CoreMinimal.h"
#include "ESBZRequestFeedbackType.h"
#include "SBZOnRequestFeedbackDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZOnRequestFeedbackDelegate, ESBZRequestFeedbackType, RequestFeedBack, bool, bResult, const FString&, ErrorCode);

