#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZPlaceableStoreItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlaceableStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZPlaceableStoreItem();
};

