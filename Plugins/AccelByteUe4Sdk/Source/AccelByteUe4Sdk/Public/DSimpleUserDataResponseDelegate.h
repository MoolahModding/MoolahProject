#pragma once
#include "CoreMinimal.h"
#include "SimpleUserData.h"
#include "DSimpleUserDataResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDSimpleUserDataResponse, FSimpleUserData, Response);

