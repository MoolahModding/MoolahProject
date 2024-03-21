#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZHeistStoreItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZHeistStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZHeistStoreItem();
};

