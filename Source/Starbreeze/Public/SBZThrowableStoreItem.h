#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZThrowableStoreItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZThrowableStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZThrowableStoreItem();
};

