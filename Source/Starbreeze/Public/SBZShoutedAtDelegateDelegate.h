#pragma once
#include "CoreMinimal.h"
#include "SBZShoutedAtDelegateDelegate.generated.h"

class APawn;
class USBZShoutTargetComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZShoutedAtDelegate, USBZShoutTargetComponent*, ShoutTarget, APawn*, Shouter);

