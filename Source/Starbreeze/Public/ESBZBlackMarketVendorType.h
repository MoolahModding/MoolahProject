#pragma once
#include "CoreMinimal.h"
#include "ESBZBlackMarketVendorType.generated.h"

UENUM(BlueprintType)
enum class ESBZBlackMarketVendorType : uint8 {
    Featured,
    Combat,
    Character,
    Tailor,
    Gold,
    None,
};

