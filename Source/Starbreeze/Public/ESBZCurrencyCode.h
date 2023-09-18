#pragma once
#include "CoreMinimal.h"
#include "ESBZCurrencyCode.generated.h"

UENUM(BlueprintType)
enum class ESBZCurrencyCode : uint8 {
    Cash,
    Gold,
    Credit,
    MAX,
};

