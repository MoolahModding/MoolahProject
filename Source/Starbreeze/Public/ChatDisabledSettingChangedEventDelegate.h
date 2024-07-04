#pragma once
#include "CoreMinimal.h"
#include "ChatDisabledSettingChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChatDisabledSettingChangedEvent, bool, DisableSettingValue);

