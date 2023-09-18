#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GridlyResult.h"
#include "DownloadLocalizedTextsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDownloadLocalizedTextsDelegate, const TArray<FPolyglotTextData>&, PolyglotTextDatas, float, Progress, const FGridlyResult&, Error);

