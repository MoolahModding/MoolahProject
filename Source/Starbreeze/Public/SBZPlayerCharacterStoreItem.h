#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZPlayerCharacterStoreItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlayerCharacterStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZPlayerCharacterStoreItem();
};

