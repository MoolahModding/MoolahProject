#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZArmorStoreItem.generated.h"

class USBZArmorData;

USTRUCT(BlueprintType)
struct FSBZArmorStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZArmorData* ArmorData;
    
    STARBREEZE_API FSBZArmorStoreItem();
};

