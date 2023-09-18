#pragma once
#include "CoreMinimal.h"
#include "ETopicType.generated.h"

UENUM(BlueprintType)
enum class ETopicType : uint8 {
    Unknown,
    PERSONAL,
    GROUP,
};

