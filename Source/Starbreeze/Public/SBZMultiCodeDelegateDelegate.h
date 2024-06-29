#pragma once
#include "CoreMinimal.h"
#include "SBZMultiCodeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZMultiCodeDelegate, int32, CorrectCodesNum);

