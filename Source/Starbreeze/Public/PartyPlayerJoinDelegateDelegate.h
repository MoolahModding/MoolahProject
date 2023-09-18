#pragma once
#include "CoreMinimal.h"
#include "PartyPlayerJoinDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPartyPlayerJoinDelegate, const FString&, PlayerId);

