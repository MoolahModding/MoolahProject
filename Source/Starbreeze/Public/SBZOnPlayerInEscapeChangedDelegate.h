#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerInEscapeChangedEvent.h"
#include "SBZOnPlayerInEscapeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnPlayerInEscapeChanged, const FSBZPlayerInEscapeChangedEvent&, PlayerInEscapeChangedEventData);

