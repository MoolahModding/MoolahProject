#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "SBZActorPerceptionUpdatedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZActorPerceptionUpdatedDelegate, AActor*, Actor, FAIStimulus, Stimulus);

