#pragma once
#include "CoreMinimal.h"
#include "SBZKeyItemCountChangedEvent.h"
#include "SBZOnKeyItemCountChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnKeyItemCountChanged, const FSBZKeyItemCountChangedEvent&, KeyItemCountChangedEventData);

