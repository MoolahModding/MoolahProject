#pragma once
#include "CoreMinimal.h"
#include "DConnectionClosedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDConnectionClosedDelegate, int32, StatusCode, const FString&, Reason, bool, bWasClean);

