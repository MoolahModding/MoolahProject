#pragma once
#include "CoreMinimal.h"
#include "ESBZCreditsType.generated.h"

UENUM(BlueprintType)
enum class ESBZCreditsType : uint8 {
    Title,
    SubTitle,
    Heading,
    Text,
    TextPair,
    Image,
    Linebreak,
    MAX,
};

