#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZPlaceableInventoryItem.generated.h"

class USBZPlaceableData;

USTRUCT(BlueprintType)
struct FSBZPlaceableInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlaceableData* PlaceableData;
    
    STARBREEZE_API FSBZPlaceableInventoryItem();
};

