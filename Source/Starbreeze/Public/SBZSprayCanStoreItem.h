#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZSprayCanStoreItem.generated.h"

class USBZSprayCanData;

USTRUCT(BlueprintType)
struct FSBZSprayCanStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSprayCanData* SprayCanData;
    
    STARBREEZE_API FSBZSprayCanStoreItem();
};

