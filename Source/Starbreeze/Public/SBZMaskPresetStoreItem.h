#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZMaskPresetStoreItem.generated.h"

class USBZMaskData;

USTRUCT(BlueprintType)
struct FSBZMaskPresetStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskData* MaskData;
    
    STARBREEZE_API FSBZMaskPresetStoreItem();
};

