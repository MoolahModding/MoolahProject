#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZCoinStoreItem.generated.h"

class USBZCoinData;

USTRUCT(BlueprintType)
struct FSBZCoinStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCoinData* CoinData;
    
    STARBREEZE_API FSBZCoinStoreItem();
};

