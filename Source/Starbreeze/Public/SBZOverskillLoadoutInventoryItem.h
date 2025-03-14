#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZOverskillLoadoutInventoryItem.generated.h"

class USBZOverskillLoadoutData;

USTRUCT(BlueprintType)
struct FSBZOverskillLoadoutInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOverskillLoadoutData* OverskillLoadoutData;
    
    STARBREEZE_API FSBZOverskillLoadoutInventoryItem();
};

