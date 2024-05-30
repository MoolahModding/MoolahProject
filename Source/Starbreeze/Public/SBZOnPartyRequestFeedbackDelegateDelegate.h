#pragma once
#include "CoreMinimal.h"
#include "ESBZPartyRequestFeedbackType.h"
#include "SBZOnPartyRequestFeedbackDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZOnPartyRequestFeedbackDelegate, ESBZPartyRequestFeedbackType, RequestFeedBack, bool, bResult, const FString&, ErrorCode);

