#pragma once
#include "CoreMinimal.h"
#include "SBZKickingInfo.h"
#include "OnKickInfoChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKickInfoChanged, FSBZKickingInfo, KickingInfo);

