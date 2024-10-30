#pragma once
#include "CoreMinimal.h"
#include "SBZSpawnRequestCompletedDelegateDelegate.generated.h"

class APawn;
class ASBZCarriedStaticInteractionActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZSpawnRequestCompletedDelegate, APawn*, SpawnedPawn, ASBZCarriedStaticInteractionActor*, Spawnedloot);

