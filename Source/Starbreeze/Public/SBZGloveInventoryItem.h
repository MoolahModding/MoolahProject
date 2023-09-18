#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZGloveInventoryItem.generated.h"

class USBZGloveData;

USTRUCT(BlueprintType)
struct FSBZGloveInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGloveData* GloveData;
    
    STARBREEZE_API FSBZGloveInventoryItem();
};

