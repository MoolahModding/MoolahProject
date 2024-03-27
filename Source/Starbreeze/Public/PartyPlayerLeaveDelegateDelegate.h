#pragma once
#include "CoreMinimal.h"
#include "PartyPlayerLeaveDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPartyPlayerLeaveDelegate, const FString&, PlayerId);

