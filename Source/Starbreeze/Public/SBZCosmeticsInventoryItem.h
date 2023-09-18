#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZCosmeticsInventoryItem.generated.h"

class USBZCosmeticsDataAsset;

USTRUCT(BlueprintType)
struct FSBZCosmeticsInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCosmeticsDataAsset* CosmeticsDataAsset;
    
    STARBREEZE_API FSBZCosmeticsInventoryItem();
};

