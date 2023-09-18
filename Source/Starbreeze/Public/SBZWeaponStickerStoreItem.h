#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZWeaponStickerStoreItem.generated.h"

class USBZWeaponStickerData;

USTRUCT(BlueprintType)
struct FSBZWeaponStickerStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponStickerData* WeaponStickerData;
    
    STARBREEZE_API FSBZWeaponStickerStoreItem();
};

