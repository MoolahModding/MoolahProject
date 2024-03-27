#pragma once
#include "CoreMinimal.h"
#include "SBZOnCuttableActorCutCompleteDelegate.generated.h"

class ASBZCuttableActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnCuttableActorCutComplete, ASBZCuttableActor*, CuttableActor);

