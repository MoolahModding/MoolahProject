#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "ESBZMetaRequestResult.h"
#include "SBZCosmeticsInventoryItem.h"
#include "SBZEquippableConfig.h"
#include "SBZWidgetBase.h"
#include "SBZWeaponCustomizationSubscreen.generated.h"

class USBZCosmeticsDataAsset;
class USBZCosmeticsPartSlot;
class USBZEquippablePartConfig;

UCLASS(Blueprintable, EditInlineNew)
class USBZWeaponCustomizationSubscreen : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig EquippableConfig;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCosmeticsPartSlot* CosmeticSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCosmeticsDataAsset* CosmeticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEquippablePartConfig* CosmeticConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZEquippableLoadoutSlot EquippableSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponSlotIndex;
    
public:
    USBZWeaponCustomizationSubscreen();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePreview();
    
    UFUNCTION(BlueprintCallable)
    void SetupScreen(const USBZCosmeticsPartSlot* NewCosmeticSlot, ESBZEquippableLoadoutSlot LoadoutSlot, int32 LoadoutIndex);
    
    UFUNCTION()
    void RefreshEquippableConfig(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTryApplyDone(ESBZMetaRequestResult Result);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTryApply();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCosmeticSlotUpdated();
    
private:
    UFUNCTION()
    void OnApplyCosmeticDone(ESBZMetaRequestResult Result);
    
public:
    UFUNCTION(BlueprintPure)
    USBZCosmeticsPartSlot* GetCosmeticSlot() const;
    
    UFUNCTION(BlueprintPure)
    USBZCosmeticsDataAsset* GetCosmeticPart() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSBZCosmeticsInventoryItem> GetCosmeticItems(const USBZCosmeticsPartSlot* NewCosmeticSlot);
    
    UFUNCTION(BlueprintPure)
    USBZEquippablePartConfig* GetCosmeticConfig();
    
    UFUNCTION(BlueprintCallable)
    void ApplyCosmeticOnBackend();
    
    UFUNCTION(BlueprintCallable)
    void ApplyCosmeticData(const USBZCosmeticsDataAsset* CosmeticDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCosmeticConfig(const USBZCosmeticsDataAsset* CosmeticDataAsset, int32 ConfigIndex);
    
};

