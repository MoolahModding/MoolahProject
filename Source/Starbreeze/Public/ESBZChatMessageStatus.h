#pragma once
#include "CoreMinimal.h"
#include "ESBZChatMessageStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZChatMessageStatus : uint8 {
    Success,
    Failure,
};

