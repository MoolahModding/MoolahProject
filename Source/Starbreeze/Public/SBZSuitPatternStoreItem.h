#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZSuitPatternStoreItem.generated.h"

class USBZSuitPatternData;

USTRUCT(BlueprintType)
struct FSBZSuitPatternStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSuitPatternData* SuitPatternData;
    
    STARBREEZE_API FSBZSuitPatternStoreItem();
};

