#pragma once
#include "CoreMinimal.h"
#include "SBZSpawnRequestCompletedDelegateDelegate.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZSpawnRequestCompletedDelegate, APawn*, SpawnedPawn);

