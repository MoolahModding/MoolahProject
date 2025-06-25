#pragma once
#include "CoreMinimal.h"
#include "ESBZItemType.h"
#include "SBZInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSku;
    
    STARBREEZE_API FSBZInventoryItem();
};

