#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStateAddedEvent.h"
#include "OnPlayerStateAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateAdded, const FSBZPlayerStateAddedEvent&, PlayerStateAddedEventData);

