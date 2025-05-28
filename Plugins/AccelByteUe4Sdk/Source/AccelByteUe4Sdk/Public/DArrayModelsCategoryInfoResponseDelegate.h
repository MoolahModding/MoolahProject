#pragma once
#include "CoreMinimal.h"
#include "ArrayModelsCategoryInfoResponse.h"
#include "DArrayModelsCategoryInfoResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDArrayModelsCategoryInfoResponse, FArrayModelsCategoryInfoResponse, Response);

