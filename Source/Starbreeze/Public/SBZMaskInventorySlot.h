#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZItemInventorySlotType.h"
#include "SBZInventorySlot.h"
#include "SBZMaskConfig.h"
#include "SBZMaskPresetConfig.h"
#include "SBZMaskInventorySlot.generated.h"

USTRUCT(BlueprintType)
struct FSBZMaskInventorySlot : public FSBZInventorySlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MaskInSlotEntitlementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MaskInSlotAccelByteItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZItemInventorySlotType MaskInventorySlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMaskConfig MaskConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMaskPresetConfig MaskPresetConfig;
    
    STARBREEZE_API FSBZMaskInventorySlot();
};

