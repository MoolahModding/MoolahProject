#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZWeaponPresetConfigDatabase.generated.h"

class USBZWeaponPresetConfigData;

UCLASS(Blueprintable)
class USBZWeaponPresetConfigDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponPresetConfigData*> WeaponPresetConfigDataArray;
    
    USBZWeaponPresetConfigDatabase();

};

