#pragma once
#include "CoreMinimal.h"
#include "ArrayModelsCurrencyList.h"
#include "DArrayModelsCurrencyListResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDArrayModelsCurrencyListResponse, FArrayModelsCurrencyList, Response);

