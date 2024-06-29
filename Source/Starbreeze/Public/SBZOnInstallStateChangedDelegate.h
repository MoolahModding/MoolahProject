#pragma once
#include "CoreMinimal.h"
#include "SBZOnInstallStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnInstallStateChanged, bool, bIsGameInstallPending);

