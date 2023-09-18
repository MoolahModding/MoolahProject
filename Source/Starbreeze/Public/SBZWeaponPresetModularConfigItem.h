#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPresetModularConfigItem.generated.h"

class USBZEquippablePartConfig;
class USBZEquippablePartDataAsset;

USTRUCT(BlueprintType)
struct FSBZWeaponPresetModularConfigItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEquippablePartDataAsset* Part;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEquippablePartConfig* Config;
    
    STARBREEZE_API FSBZWeaponPresetModularConfigItem();
};

