#pragma once
#include "CoreMinimal.h"
#include "SBZOnEnabledAsObjectiveDelegate.generated.h"

class ASBZCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnEnabledAsObjective, ASBZCharacter*, FoundBy);

