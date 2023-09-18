#pragma once
#include "CoreMinimal.h"
#include "SBZAsyncLoadingProgress.h"
#include "SBZPreMatchAsyncLoadingProgressDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZPreMatchAsyncLoadingProgress, const FSBZAsyncLoadingProgress&, AsyncLoadingProgressData);

