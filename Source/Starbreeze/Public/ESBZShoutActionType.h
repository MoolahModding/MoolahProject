#pragma once
#include "CoreMinimal.h"
#include "ESBZShoutActionType.generated.h"

UENUM(BlueprintType)
enum class ESBZShoutActionType : uint8 {
    None,
    Mark,
    HelpMe,
    HelpOther,
    Callout,
    Comment,
    GetDown,
    CopSurrender,
};

