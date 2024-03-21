#pragma once
#include "CoreMinimal.h"
#include "ESBZStoreItemDefaultUICategory.h"
#include "ESBZStoreItemUICategoryType.h"
#include "SBZStoreItemUICategory.generated.h"

class USBZStoreItemCustomUICategory;

USTRUCT(BlueprintType)
struct FSBZStoreItemUICategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZStoreItemUICategoryType StoreItemUICategoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZStoreItemDefaultUICategory StoreItemDefaultUICategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStoreItemCustomUICategory* StoreItemCustomUICategory;
    
    STARBREEZE_API FSBZStoreItemUICategory();
};

