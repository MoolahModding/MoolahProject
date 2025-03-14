#pragma once
#include "CoreMinimal.h"
#include "SBZOnLoadProgressionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnLoadProgression, int32, ProgressionValue, int32, DoneProgressionValue);

