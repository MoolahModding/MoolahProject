#pragma once
#include "CoreMinimal.h"
#include "PublicMessageSendStatusDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPublicMessageSendStatusDelegate, bool, bResult, const FString&, Message, const FString&, UserId, const FString&, RoomId);

