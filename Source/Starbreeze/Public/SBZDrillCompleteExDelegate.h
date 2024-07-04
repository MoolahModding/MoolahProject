#pragma once
#include "CoreMinimal.h"
#include "SBZDrillCompleteExDelegate.generated.h"

class ASBZDrillEx;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZDrillCompleteEx, ASBZDrillEx*, Drill);

