#pragma once
#include "CoreMinimal.h"
#include "SBZFilterActorDynamicDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZFilterActorDynamicDelegate, FName, Identifier, AActor*, Actor, int32, CurrentTotalActors);

