#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZMaskPatternStoreItem.generated.h"

class USBZMaskPatternData;

USTRUCT(BlueprintType)
struct FSBZMaskPatternStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskPatternData* MaskPatternData;
    
    STARBREEZE_API FSBZMaskPatternStoreItem();
};

