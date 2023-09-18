#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "EBSZPatternMenuMode.h"
#include "SBZMaskCustomizationSlotScreenBase.h"
#include "SBZMaskCustomizationPattern.generated.h"

class UClass;
class UHorizontalBox;
class USBZCosmeticsDataAsset;
class USBZCosmeticsPartSlot;
class USBZMainMenuCosmeticItemButton;
class USBZMainMenuCosmeticPanel;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMaskCustomizationPattern : public USBZMaskCustomizationSlotScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCosmeticsPartSlot* PatternSlotAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCosmeticsPartSlot* SprayCanSlotAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZCosmeticsPartSlot*> PatternSprayCanSlotAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBSZPatternMenuMode CurrentMenuMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSprayCans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCosmeticsDataAsset* ReturnPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZCosmeticsDataAsset*> ReturnSprayCanArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SprayCanSelectorButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin SprayCanSelectorButtonMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CosmeticPanelDefaultButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveSprayCanSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuCosmeticPanel* Cosmetic_Panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* SprayCanHorizontalPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuCosmeticItemButton* CurrentPatternSelectedItemButton;
    
public:
    USBZMaskCustomizationPattern();

protected:
    UFUNCTION(BlueprintCallable)
    void SprayCanSelectorButtonSelected(USBZMenuButton* SelectedButton);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowSprayCans();
    
    UFUNCTION(BlueprintCallable)
    void ShowPatterns();
    
    UFUNCTION(BlueprintCallable)
    bool SetActiveSprayCanSlotIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void IncrementSprayCanSlotIndex(int32 InDelta);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CosmeticPanelDefaultButtonSelected();
    
    UFUNCTION(BlueprintCallable)
    void CosmeticPanelButtonSelected(USBZMainMenuCosmeticItemButton* SelectedButton);
    
};

