#pragma once
#include "CoreMinimal.h"
#include "SBZActorSpawnRequestHandle.h"
#include "SBZActorSpawnRequestDynamicDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSBZActorSpawnRequestDynamicDelegate, FSBZActorSpawnRequestHandle, RequestHandle, AActor*, Actor, int32, RequestIndex);

