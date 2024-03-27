#pragma once
#include "CoreMinimal.h"
#include "EPD3AmmoState.h"
#include "SBZCombinedReloadState.h"
#include "SBZPlayerStatePawnWidgetBase.h"
#include "PD3WeaponStatusWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPD3WeaponStatusWidget : public USBZPlayerStatePawnWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponIndex;
    
public:
    UPD3WeaponStatusWidget();
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnReloadStateChanged(const FSBZCombinedReloadState& OldCombinedState, const FSBZCombinedReloadState& NewCombinedState, bool bWasPlaying, bool bIsPlaying);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnEquippedChanged(bool bIsEquippedNewValue);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAmmoValuesInitialized(int32 AmmoLoadedInit, int32 AmmoInventoryInit, int32 AmmoTotalInit);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAmmoTotalStateChanged(EPD3AmmoState NewState);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAmmoTotalChanged(int32 AmmoTotalChanged);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAmmoLoadedStateChanged(EPD3AmmoState NewState);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAmmoLoadedChanged(int32 AmmoLoadedChanged);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAmmoInventoryStateChanged(EPD3AmmoState NewState);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAmmoInventoryChanged(int32 AmmoInventoryChanged);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAmmoAdded(int32 AmmoAddedCount);
    
};

