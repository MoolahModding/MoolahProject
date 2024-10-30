#pragma once
#include "CoreMinimal.h"
#include "TLMVoiceChatOnDestroySessionCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTLMVoiceChatOnDestroySessionComplete, bool, bWasSuccessful);

