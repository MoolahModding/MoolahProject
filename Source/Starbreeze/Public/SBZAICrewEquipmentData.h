#pragma once
#include "CoreMinimal.h"
#include "SBZAIEquipmentData.h"
#include "SBZMaskConfig.h"
#include "SBZAICrewEquipmentData.generated.h"

class USBZMaskData;

UCLASS(Blueprintable)
class USBZAICrewEquipmentData : public USBZAIEquipmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskData* MaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMaskConfig MaskConfig;
    
    USBZAICrewEquipmentData();

};

