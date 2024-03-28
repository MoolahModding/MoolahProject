#pragma once
#include "CoreMinimal.h"
#include "PartyPlayerKickDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPartyPlayerKickDelegate, const FString&, PlayerId);

