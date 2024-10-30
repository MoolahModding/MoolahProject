#pragma once
#include "CoreMinimal.h"
#include "TLMVoiceChatOnSessionParticipantsChange_EOSIdDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTLMVoiceChatOnSessionParticipantsChange_EOSId, const FString&, EOSId, bool, bJoined);

