#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZToolStoreItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZToolStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZToolStoreItem();
};

