#pragma once
#include "CoreMinimal.h"
#include "SBZOnActorSpawnedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnActorSpawnedDelegate, AActor*, Actor);

