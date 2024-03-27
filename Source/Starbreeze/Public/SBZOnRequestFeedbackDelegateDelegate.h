#pragma once
#include "CoreMinimal.h"
#include "ESBZRequestFeedbackType.h"
#include "SBZOnRequestFeedbackDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZOnRequestFeedbackDelegate, ESBZRequestFeedbackType, RequestFeedBack, bool, bResult, const FString&, ErrorCode);

