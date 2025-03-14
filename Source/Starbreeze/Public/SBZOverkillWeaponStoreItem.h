#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZOverkillWeaponStoreItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZOverkillWeaponStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZOverkillWeaponStoreItem();
};

