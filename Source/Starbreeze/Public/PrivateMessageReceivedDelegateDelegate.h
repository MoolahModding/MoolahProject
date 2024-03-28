#pragma once
#include "CoreMinimal.h"
#include "PrivateMessageReceivedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPrivateMessageReceivedDelegate, const FString&, Timestamp, const FString&, Sender, const FString&, Message, const FString&, RoomId);

