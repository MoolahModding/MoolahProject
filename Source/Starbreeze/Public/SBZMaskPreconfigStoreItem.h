#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZMaskPreconfigStoreItem.generated.h"

class USBZMaskPreconfigData;

USTRUCT(BlueprintType)
struct FSBZMaskPreconfigStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskPreconfigData* MaskPreconfigData;
    
    STARBREEZE_API FSBZMaskPreconfigStoreItem();
};

