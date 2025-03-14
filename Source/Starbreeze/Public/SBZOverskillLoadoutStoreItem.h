#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZOverskillLoadoutStoreItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZOverskillLoadoutStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZOverskillLoadoutStoreItem();
};

