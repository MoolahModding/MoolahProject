#pragma once
#include "CoreMinimal.h"
#include "PartyInvitationReceivedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPartyInvitationReceivedDelegate, const FString&, FromPlayerId);

