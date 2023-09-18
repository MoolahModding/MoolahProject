#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZSuitBaseStoreItem.generated.h"

class USBZSuitBaseData;

USTRUCT(BlueprintType)
struct FSBZSuitBaseStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSuitBaseData* SuitBaseData;
    
    STARBREEZE_API FSBZSuitBaseStoreItem();
};

