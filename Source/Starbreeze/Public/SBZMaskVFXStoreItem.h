#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZMaskVFXStoreItem.generated.h"

class USBZMaskVFXData;

USTRUCT(BlueprintType)
struct FSBZMaskVFXStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskVFXData* MaskVFXData;
    
    STARBREEZE_API FSBZMaskVFXStoreItem();
};

