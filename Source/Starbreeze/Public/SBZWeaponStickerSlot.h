#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticsPartSlot.h"
#include "SBZWeaponStickerSlot.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USBZWeaponStickerSlot : public USBZCosmeticsPartSlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 StickerPositionIndex;
    
    USBZWeaponStickerSlot();

};

