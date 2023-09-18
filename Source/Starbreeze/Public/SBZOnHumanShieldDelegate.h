#pragma once
#include "CoreMinimal.h"
#include "SBZOnHumanShieldDelegate.generated.h"

class ASBZAICharacter;
class ASBZCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZOnHumanShield, ASBZAICharacter*, Character, ASBZCharacter*, Instigator, bool, bHumanShield);

