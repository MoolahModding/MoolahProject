#pragma once
#include "CoreMinimal.h"
#include "ESBZChatChannelType.generated.h"

UENUM(BlueprintType)
enum class ESBZChatChannelType : uint8 {
    None,
    Public,
    Party,
    Private,
};

