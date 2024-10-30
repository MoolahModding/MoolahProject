#pragma once
#include "CoreMinimal.h"
#include "SBZPlayersCarryBagChangedEvent.h"
#include "SBZPlayersCarryBagChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZPlayersCarryBagChangedDelegate, const FSBZPlayersCarryBagChangedEvent&, CarryBagChangedEventData);

