#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZPayDayCreditStoreItem.generated.h"

class USBZPayDayCreditData;

USTRUCT(BlueprintType)
struct FSBZPayDayCreditStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPayDayCreditData* PayDayCreditData;
    
    STARBREEZE_API FSBZPayDayCreditStoreItem();
};

