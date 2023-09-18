#pragma once
#include "CoreMinimal.h"
#include "ESBZLogVerbosityType.generated.h"

UENUM(BlueprintType)
enum class ESBZLogVerbosityType : uint8 {
    NoLogging,
    Fatal,
    Error,
    Warning,
    Display,
    Log,
    Verbose,
    VeryVerbose,
    All = 0x7,
};

