#pragma once
#include "CoreMinimal.h"
#include "TLMVoiceChatOnVoiceChatPlayerTalkingUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTLMVoiceChatOnVoiceChatPlayerTalkingUpdated, const FString&, ChannelName, const FString&, PlayerName, bool, bIsTalking);

