#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZItemInventorySlotAvailability.h"
#include "SBZInventorySlot.generated.h"

USTRUCT(BlueprintType)
struct FSBZInventorySlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZItemInventorySlotAvailability ItemInventorySlotAvailability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConfigSlotEntitlementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConfigSlotItemId;
    
    STARBREEZE_API FSBZInventorySlot();
};

