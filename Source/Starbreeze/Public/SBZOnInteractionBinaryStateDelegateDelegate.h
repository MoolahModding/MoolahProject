#pragma once
#include "CoreMinimal.h"
#include "SBZOnInteractionBinaryStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnInteractionBinaryStateDelegate, bool, BNewState);

