#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableConfig.h"
#include "SBZInventoryBaseData.h"
#include "SBZWeaponPresetModularConfigItem.h"
#include "SBZWeaponPresetConfigData.generated.h"

class USBZEquippableData;
class USBZModularPartSlotBase;

UCLASS(Blueprintable)
class STARBREEZE_API USBZWeaponPresetConfigData : public USBZInventoryBaseData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEquippableData* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USBZModularPartSlotBase*, FSBZWeaponPresetModularConfigItem> ModData;
    
public:
    USBZWeaponPresetConfigData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZEquippableConfig GetEquippableConfig() const;
    
};

