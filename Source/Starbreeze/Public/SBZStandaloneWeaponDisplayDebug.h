#pragma once
#include "CoreMinimal.h"
#include "SBZDebugModularConfigItem.h"
#include "SBZStandaloneWeaponDisplay.h"
#include "SBZStandaloneWeaponDisplayDebug.generated.h"

class USBZEquippableData;
class USBZWeaponPresetConfigData;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZStandaloneWeaponDisplayDebug : public ASBZStandaloneWeaponDisplay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPresetConfigData* WeaponPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEquippableData* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDebugModularConfigItem> ModData;
    
public:
    ASBZStandaloneWeaponDisplayDebug(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Setup();
    
};

