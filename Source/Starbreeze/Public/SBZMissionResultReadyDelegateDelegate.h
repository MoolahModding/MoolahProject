#pragma once
#include "CoreMinimal.h"
#include "SBZEndMissionResultData.h"
#include "SBZMissionResultReadyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZMissionResultReadyDelegate, const FSBZEndMissionResultData&, ResultData);

