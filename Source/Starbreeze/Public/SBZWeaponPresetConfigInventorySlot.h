#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPresetConfigInventorySlot.generated.h"

class USBZWeaponPresetConfigData;

USTRUCT(BlueprintType)
struct FSBZWeaponPresetConfigInventorySlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPresetConfigData* WeaponPresetConfigData;
    
    STARBREEZE_API FSBZWeaponPresetConfigInventorySlot();
};

