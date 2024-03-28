#pragma once
#include "CoreMinimal.h"
#include "ETypeOfOnlineAsyncTask.generated.h"

UENUM(BlueprintType)
enum class ETypeOfOnlineAsyncTask : uint8 {
    Serial,
    Parallel,
};

