#pragma once
#include "CoreMinimal.h"
#include "AccountUserData.h"
#include "DUserDataHandlerDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDUserDataHandler, const FAccountUserData&, Result);

