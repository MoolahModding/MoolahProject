#pragma once
#include "CoreMinimal.h"
#include "SBZBundleItem.h"
#include "SBZStoreBaseItem.h"
#include "SBZItemBundleStoreItem.generated.h"

class USBZItemBundleData;

USTRUCT(BlueprintType)
struct FSBZItemBundleStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZItemBundleData* ItemBundleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBundleItem> BundleContentArray;
    
    STARBREEZE_API FSBZItemBundleStoreItem();
};

