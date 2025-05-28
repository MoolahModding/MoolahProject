#pragma once
#include "CoreMinimal.h"
#include "DUserEligiblePlayHandlerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDUserEligiblePlayHandler, const bool, Result);

