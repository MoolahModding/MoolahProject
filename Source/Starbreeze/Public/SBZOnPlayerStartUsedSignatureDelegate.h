#pragma once
#include "CoreMinimal.h"
#include "SBZOnPlayerStartUsedSignatureDelegate.generated.h"

class ASBZCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnPlayerStartUsedSignature, ASBZCharacter*, SBZCharacter, bool, bIsPlayer);

