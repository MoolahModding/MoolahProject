#pragma once
#include "CoreMinimal.h"
#include "SBZInternalChallengeRewardItem.generated.h"

class USBZInventoryBaseData;

USTRUCT(BlueprintType)
struct FSBZInternalChallengeRewardItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccelByteSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* Item;
    
    STARBREEZE_API FSBZInternalChallengeRewardItem();
};

