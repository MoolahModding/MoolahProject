#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeProgressItem.generated.h"

class USBZInventoryBaseData;

USTRUCT(BlueprintType)
struct FSBZChallengeProgressItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccelbyteItemSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* Item;
    
    STARBREEZE_API FSBZChallengeProgressItem();
};

