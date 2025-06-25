#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZArmorConfig.h"
#include "SBZInventorySlot.h"
#include "SBZArmorInventorySlot.generated.h"

USTRUCT(BlueprintType)
struct FSBZArmorInventorySlot : public FSBZInventorySlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ArmorInSlotEntitlementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArmorInSlotAccelByteItemSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZArmorConfig ArmorConfig;
    
    STARBREEZE_API FSBZArmorInventorySlot();
};

