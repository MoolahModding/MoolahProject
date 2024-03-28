#pragma once
#include "CoreMinimal.h"
#include "AccountUserData.h"
#include "DAccountUserDataResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDAccountUserDataResponse, FAccountUserData, Response);

