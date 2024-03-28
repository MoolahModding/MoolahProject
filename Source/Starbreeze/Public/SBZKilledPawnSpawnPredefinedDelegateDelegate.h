#pragma once
#include "CoreMinimal.h"
#include "SBZKilledPawnSpawnPredefinedDelegateDelegate.generated.h"

class APawn;
class ASBZPawnSpawnPredefined;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZKilledPawnSpawnPredefinedDelegate, APawn*, DeadPawn, ASBZPawnSpawnPredefined*, Spawner);

