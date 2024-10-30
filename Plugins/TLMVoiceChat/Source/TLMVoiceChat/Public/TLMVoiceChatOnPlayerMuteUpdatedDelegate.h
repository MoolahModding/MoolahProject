#pragma once
#include "CoreMinimal.h"
#include "TLMVoiceChatOnPlayerMuteUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTLMVoiceChatOnPlayerMuteUpdated, const FString&, EOSProdID, bool, bIsMuted);

