#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZInventorySlot.h"
#include "SBZGloveInventorySlot.generated.h"

class USBZGloveData;

USTRUCT(BlueprintType)
struct FSBZGloveInventorySlot : public FSBZInventorySlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GloveInSlotEntitlementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GloveInSlotAccelByteItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGloveData* GloveData;
    
    STARBREEZE_API FSBZGloveInventorySlot();
};

