#pragma once
#include "CoreMinimal.h"
#include "SBZLootedSignatureDelegate.generated.h"

class ASBZInstantLoot;
class ASBZPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZLootedSignature, ASBZInstantLoot*, InstantLoot, ASBZPlayerCharacter*, TakenByPlayer);

