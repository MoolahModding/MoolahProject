#pragma once
#include "CoreMinimal.h"
#include "ESBZSubobjectiveComplete.generated.h"

UENUM(BlueprintType)
enum class ESBZSubobjectiveComplete : uint8 {
    None,
    CompleteOnAll,
    CompleteOnAllOrFail,
    CompleteOnAllEnded,
    ProgressOnComplete,
};

