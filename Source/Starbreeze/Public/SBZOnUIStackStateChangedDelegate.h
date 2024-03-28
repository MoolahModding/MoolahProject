#pragma once
#include "CoreMinimal.h"
#include "SBZUIStackChangedEvent.h"
#include "SBZOnUIStackStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnUIStackStateChanged, FSBZUIStackChangedEvent, StackEvent);

