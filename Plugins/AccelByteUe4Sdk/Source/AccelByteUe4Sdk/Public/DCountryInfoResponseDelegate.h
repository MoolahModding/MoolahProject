#pragma once
#include "CoreMinimal.h"
#include "CountryInfo.h"
#include "DCountryInfoResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDCountryInfoResponse, FCountryInfo, Response);

