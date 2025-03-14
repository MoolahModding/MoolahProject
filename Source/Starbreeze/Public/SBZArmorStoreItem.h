#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZArmorStoreItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZArmorStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZArmorStoreItem();
};

