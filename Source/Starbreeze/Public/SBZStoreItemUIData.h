#pragma once
#include "CoreMinimal.h"
#include "ESBZStoreItemUIIdSource.h"
#include "SBZStoreBaseItem.h"
#include "SBZStoreItemUIData.generated.h"

class USBZInventoryBaseData;

USTRUCT(BlueprintType)
struct FSBZStoreItemUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZStoreItemUIIdSource StoreItemUIIdSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExternalItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* InventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZStoreBaseItem StoreItem;
    
    STARBREEZE_API FSBZStoreItemUIData();
};

