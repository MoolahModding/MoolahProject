#pragma once
#include "CoreMinimal.h"
#include "SBZEquippablePartConfig.h"
#include "SBZWeaponStickerDataConfig.generated.h"

UCLASS(Blueprintable)
class USBZWeaponStickerDataConfig : public USBZEquippablePartConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 StickerPositionIndex;
    
    USBZWeaponStickerDataConfig();
};

