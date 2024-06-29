#pragma once
#include "CoreMinimal.h"
#include "SBZBinaryStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZBinaryStateChangedSignature, bool, bState, bool, bDoCosmetics);

