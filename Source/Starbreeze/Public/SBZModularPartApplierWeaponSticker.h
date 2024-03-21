#pragma once
#include "CoreMinimal.h"
#include "SBZModularPartApplierWeaponCosmetics.h"
#include "SBZModularPartApplierWeaponSticker.generated.h"

class USBZWeaponStickerDataConfig;

UCLASS(Blueprintable, MinimalAPI)
class USBZModularPartApplierWeaponSticker : public USBZModularPartApplierWeaponCosmetics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponStickerDataConfig* StickerConfig;
    
    USBZModularPartApplierWeaponSticker();
};

