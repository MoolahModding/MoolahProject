#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZItemInventorySlotType.h"
#include "SBZInventorySlot.h"
#include "SBZSuitConfig.h"
#include "SBZSuitPresetConfig.h"
#include "SBZSuitInventorySlot.generated.h"

USTRUCT(BlueprintType)
struct FSBZSuitInventorySlot : public FSBZInventorySlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SuitInSlotEntitlementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SuitInSlotAccelByteItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZItemInventorySlotType SuitInventorySlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSuitConfig SuitConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSuitPresetConfig SuitPresetConfig;
    
    STARBREEZE_API FSBZSuitInventorySlot();
};

