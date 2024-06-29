#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZMaskConfig.h"
#include "SBZMaskPartConfigGroup.h"
#include "SBZSuitConfig.h"
#include "SBZSuitInventorySlot.h"
#include "SBZSuitPartConfigGroup.h"
#include "SBZCustomizationLibrary.generated.h"

class ASBZCustomizationManager;
class ASBZMask;
class USBZCosmeticsDataAsset;
class USBZCosmeticsPartSlot;
class USBZCustomizableSuitMeshComponent;
class USBZModularPartDataAsset;
class USBZSuitPartConfig;

UCLASS(Blueprintable)
class STARBREEZE_API USBZCustomizationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZCustomizationLibrary();

    UFUNCTION(BlueprintCallable)
    static void UseDefaultMask();
    
    UFUNCTION(BlueprintCallable)
    static void SetPreviewSuitConfig(const FSBZSuitConfig& InSuitConfig);
    
    UFUNCTION(BlueprintCallable)
    static void SetPreviewMaskConfig(const FSBZMaskConfig& MaskConfig);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartInPreview(const USBZSuitPartConfig* InSuitPartConfig, const USBZCosmeticsPartSlot* InCosmeticPartSlot, const USBZCosmeticsDataAsset* InCosmeticsDataAsset);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultSuitOnPreviewSuitConfig();
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultMaskOnPreviewMaskConfig();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSuitPreviewAssetFromSlot(const USBZSuitPartConfig* InSuitPartConfig, const USBZCosmeticsPartSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveMaskPreviewAssetFromSlot(const USBZCosmeticsPartSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    static void PreviewSuitAssetInSlot(const USBZCosmeticsPartSlot* Slot, const FSBZSuitPartConfigGroup& SuitPartConfigGroup);
    
    UFUNCTION(BlueprintCallable)
    static void PreviewEquippedMask();
    
    UFUNCTION(BlueprintCallable)
    static void MaskPreviewAssetInSlot(const USBZCosmeticsPartSlot* Slot, const FSBZMaskPartConfigGroup& MaskPartConfigGroup);
    
    UFUNCTION(BlueprintCallable)
    static USBZModularPartDataAsset* GetSuitCosmeticDataAssetFromInventorySlot(const FSBZSuitInventorySlot& InventorySlot, const USBZCosmeticsPartSlot* Slot, const USBZSuitPartConfig* Config);
    
    UFUNCTION(BlueprintCallable)
    static USBZModularPartDataAsset* GetPreviewSuitCosmeticDataAsset(const USBZCosmeticsPartSlot* Slot, const USBZSuitPartConfig* Config);
    
    UFUNCTION(BlueprintCallable)
    static FSBZSuitConfig GetPreviewSuitConfig();
    
    UFUNCTION(BlueprintCallable)
    static FSBZMaskConfig GetPreviewMaskConfig();
    
    UFUNCTION(BlueprintCallable)
    static USBZCustomizableSuitMeshComponent* GetMainMenuMannequinCustomizableSuitComponent();
    
    UFUNCTION(BlueprintCallable)
    static ASBZMask* GetGlobalMaskPreviewActor();
    
    UFUNCTION(BlueprintCallable)
    static ASBZCustomizationManager* GetCustomizationManager();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyCosmeticPartOnMask(const int32 SlotIndex, const USBZCosmeticsPartSlot* CosmeticsPartSlot, const FSBZMaskPartConfigGroup& MaskPartConfigGroup);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAllCosmeticPartsFromPreviewOnSuit(const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAllCosmeticPartsFromPreviewOnMask(const int32 SlotIndex);
    
};

