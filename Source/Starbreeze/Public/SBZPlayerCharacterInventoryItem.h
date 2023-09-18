#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZPlayerCharacterInventoryItem.generated.h"

class USBZPlayerCharacterData;

USTRUCT(BlueprintType)
struct FSBZPlayerCharacterInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlayerCharacterData* PlayerCharacterData;
    
    STARBREEZE_API FSBZPlayerCharacterInventoryItem();
};

