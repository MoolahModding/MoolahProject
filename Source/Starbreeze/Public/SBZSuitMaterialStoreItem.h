#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZSuitMaterialStoreItem.generated.h"

class USBZSuitMaterialData;

USTRUCT(BlueprintType)
struct FSBZSuitMaterialStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSuitMaterialData* SuitMaterialData;
    
    STARBREEZE_API FSBZSuitMaterialStoreItem();
};

