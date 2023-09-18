#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZMaskMouldStoreItem.generated.h"

class USBZMaskMouldData;

USTRUCT(BlueprintType)
struct FSBZMaskMouldStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskMouldData* MaskMouldData;
    
    STARBREEZE_API FSBZMaskMouldStoreItem();
};

