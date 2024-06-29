#pragma once
#include "CoreMinimal.h"
#include "SBZWindData.h"
#include "SBZOnWindChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnWindChangedDelegate, const FSBZWindData&, WindData, int32, InstanceIndex);

