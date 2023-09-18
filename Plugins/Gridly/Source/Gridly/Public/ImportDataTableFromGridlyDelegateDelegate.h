#pragma once
#include "CoreMinimal.h"
#include "GridlyResult.h"
#include "GridlyTableRow.h"
#include "ImportDataTableFromGridlyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FImportDataTableFromGridlyDelegate, const TArray<FGridlyTableRow>&, GridlyTableRows, float, Progress, const FGridlyResult&, Error);

