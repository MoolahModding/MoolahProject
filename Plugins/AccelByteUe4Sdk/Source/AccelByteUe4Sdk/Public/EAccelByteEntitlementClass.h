#pragma once
#include "CoreMinimal.h"
#include "EAccelByteEntitlementClass.generated.h"

UENUM(BlueprintType)
enum class EAccelByteEntitlementClass : uint8 {
    NONE,
    APP,
    ENTITLEMENT,
    CODE,
    SUBSCRIPTION,
    MEDIA,
    OPTIONBOX,
    LOOTBOX,
};

