#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZWeaponPresetStoreItem.generated.h"

class USBZWeaponPresetConfigData;

USTRUCT(BlueprintType)
struct FSBZWeaponPresetStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPresetConfigData* WeaponPresetConfigData;
    
    STARBREEZE_API FSBZWeaponPresetStoreItem();
};

