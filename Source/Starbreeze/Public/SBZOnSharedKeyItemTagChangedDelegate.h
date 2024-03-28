#pragma once
#include "CoreMinimal.h"
#include "SBZSharedKeyItemTagChangedEvent.h"
#include "SBZOnSharedKeyItemTagChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnSharedKeyItemTagChanged, const FSBZSharedKeyItemTagChangedEvent&, KeyItemCountChangedEventData);

