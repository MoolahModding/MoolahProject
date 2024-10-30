#pragma once
#include "CoreMinimal.h"
#include "TLMVoiceChatOnPlayerBlockUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTLMVoiceChatOnPlayerBlockUpdated, const FString&, EOSProdID, bool, bIsBlocked);

