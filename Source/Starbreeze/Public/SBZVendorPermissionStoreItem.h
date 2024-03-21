#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZVendorPermissionStoreItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZVendorPermissionStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZVendorPermissionStoreItem();
};

