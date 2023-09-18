#pragma once
#include "CoreMinimal.h"
#include "GridlyResult.h"
#include "GridlyTableRow.h"
#include "DownloadGridlyNativeCultureDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDownloadGridlyNativeCultureDelegate, const TArray<FGridlyTableRow>&, NativeCultureTextData, float, Progress, const FGridlyResult&, Error);

