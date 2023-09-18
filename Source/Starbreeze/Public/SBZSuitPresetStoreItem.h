#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZSuitPresetStoreItem.generated.h"

class USBZSuitPresetData;

USTRUCT(BlueprintType)
struct FSBZSuitPresetStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSuitPresetData* SuitPresetData;
    
    STARBREEZE_API FSBZSuitPresetStoreItem();
};

