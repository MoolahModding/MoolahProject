#pragma once
#include "CoreMinimal.h"
#include "PrivateMessageSendStatusDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPrivateMessageSendStatusDelegate, bool, bResult, const FString&, Message, const FString&, UserId, const FString&, RoomId);

