#pragma once
#include "CoreMinimal.h"
#include "PD3HostageDemandChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPD3HostageDemandChanged, uint8, OldNrHostages, uint8, NewNrHostages);

