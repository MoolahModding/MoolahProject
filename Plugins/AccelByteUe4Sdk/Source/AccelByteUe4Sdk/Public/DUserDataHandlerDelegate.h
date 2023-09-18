#pragma once
#include "CoreMinimal.h"
#include "AccountUserData.h"
#include "DUserDataHandlerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDUserDataHandler, const FAccountUserData&, Result);

