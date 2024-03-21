#pragma once
#include "CoreMinimal.h"
#include "ESBZPredicateQueryTarget.generated.h"

UENUM()
enum class ESBZPredicateQueryTarget : int32 {
    ListenerActor,
    StimuliActor,
    Stimuli,
};

