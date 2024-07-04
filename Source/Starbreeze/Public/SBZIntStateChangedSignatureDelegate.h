#pragma once
#include "CoreMinimal.h"
#include "SBZIntStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZIntStateChangedSignature, int32, OldState, int32, NewState, bool, bDoCosmetics);

