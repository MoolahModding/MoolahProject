#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZWeaponAmmoVisibilityType.h"
#include "SBZEquippablePartCustomData.h"
#include "SBZWeaponMagazineData.generated.h"

UCLASS(Blueprintable)
class USBZWeaponMagazineData : public USBZEquippablePartCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AmmoLoadedMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AmmoLoaded;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AmmoPerReload;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AmmoInventoryMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AmmoInventory;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AmmoPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponAmmoVisibilityType AmmoVisibilityType;
    
    USBZWeaponMagazineData();

};

