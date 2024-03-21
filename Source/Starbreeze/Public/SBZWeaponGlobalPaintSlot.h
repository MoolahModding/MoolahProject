#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticsPartSlot.h"
#include "SBZWeaponPatternDataSingleColorAreaList.h"
#include "SBZWeaponGlobalPaintSlot.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USBZWeaponGlobalPaintSlot : public USBZCosmeticsPartSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponPatternDataSingleColorAreaList GlobalPaintAreas;
    
    USBZWeaponGlobalPaintSlot();
};

