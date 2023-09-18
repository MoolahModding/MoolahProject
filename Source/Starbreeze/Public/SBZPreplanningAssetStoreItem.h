#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZPreplanningAssetStoreItem.generated.h"

class USBZPreplanningAssetData;

USTRUCT(BlueprintType)
struct FSBZPreplanningAssetStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPreplanningAssetData* PreplanningAssetData;
    
    STARBREEZE_API FSBZPreplanningAssetStoreItem();
};

