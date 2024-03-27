#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStateRemovedEvent.h"
#include "OnPlayerStateRemovedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateRemoved, const FSBZPlayerStateRemovedEvent&, PlayerStateRemovedEventData);

