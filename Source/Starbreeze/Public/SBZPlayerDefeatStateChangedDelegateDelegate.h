#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerDefeatStateChangedData.h"
#include "SBZPlayerDefeatStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZPlayerDefeatStateChangedDelegate, const FSBZPlayerDefeatStateChangedData&, InData);

