#pragma once
#include "CoreMinimal.h"
#include "SBZOnUIStackLockChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnUIStackLockChanged, bool, bIsStackLocked);

