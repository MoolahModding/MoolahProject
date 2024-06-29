#pragma once
#include "CoreMinimal.h"
#include "PartyMessageReceivedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPartyMessageReceivedDelegate, const FString&, Timestamp, const FString&, Sender, const FString&, Message, const FString&, RoomId);

