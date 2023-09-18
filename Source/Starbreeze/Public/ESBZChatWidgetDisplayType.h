#pragma once
#include "CoreMinimal.h"
#include "ESBZChatWidgetDisplayType.generated.h"

UENUM(BlueprintType)
enum class ESBZChatWidgetDisplayType : uint8 {
    Expanded,
    Collapsed,
    Disabled,
};

