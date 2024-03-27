#pragma once
#include "CoreMinimal.h"
#include "PartyMessageSendStatusDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPartyMessageSendStatusDelegate, bool, bResult, const FString&, Message, const FString&, UserId, const FString&, RoomId);

