#pragma once
#include "CoreMinimal.h"
#include "PartyPlayerLeaveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPartyPlayerLeaveDelegate, const FString&, PlayerId);

