#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "ESBZMetaRequestResult.h"
#include "SBZMenuStackWidget.h"
#include "SBZWeaponPresetStoreItem.h"
#include "SBZWeaponStoreItem.h"
#include "SBZMainMenuWeaponVendorWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuWeaponVendorWidget : public USBZMenuStackWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZEquippableLoadoutSlot EquippableSlot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZWeaponStoreItem> WeaponStoreMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZWeaponPresetStoreItem> WeaponPresetStoreMap;
    
public:
    USBZMainMenuWeaponVendorWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void TryBuyWeaponPreset(const FSBZWeaponPresetStoreItem& WeaponPresetStoreItem);
    
    UFUNCTION(BlueprintCallable)
    void TryBuyWeapon(const FSBZWeaponStoreItem& WeaponStoreItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponStoreItemsUpdated(const TMap<FGuid, FSBZWeaponStoreItem>& InWeaponStoreMap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponPresetStoreItemsUpdated(const TMap<FGuid, FSBZWeaponPresetStoreItem>& InWeaponPresetStoreMap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuyWeaponPresetDone(bool bWasSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuyWeaponDone(bool bWasSuccess);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnBuyWeaponPresetDone(ESBZMetaRequestResult BuyWeaponResult, FGuid ItemId);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnBuyWeaponDone(ESBZMetaRequestResult BuyWeaponResult, FGuid ItemId);
    
};

