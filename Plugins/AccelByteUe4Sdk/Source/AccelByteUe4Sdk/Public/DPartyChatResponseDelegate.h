#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyMessageResponse.h"
#include "DPartyChatResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyChatResponse, FAccelByteModelsPartyMessageResponse, Response);

