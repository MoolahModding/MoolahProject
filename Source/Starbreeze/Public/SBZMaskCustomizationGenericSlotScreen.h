#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticPanelDefaultParams.h"
#include "SBZMaskCustomizationSlotScreenBase.h"
#include "SBZMaskCustomizationGenericSlotScreen.generated.h"

class USBZCosmeticsDataAsset;
class USBZCosmeticsPartSlot;
class USBZMainMenuCosmeticItemButton;
class USBZMainMenuCosmeticPanel;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMaskCustomizationGenericSlotScreen : public USBZMaskCustomizationSlotScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuCosmeticPanel* Cosmetic_Panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCosmeticsPartSlot* CosmeticPartsSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCosmeticsDataAsset* SelectedAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScreenSlotText;
    
public:
    USBZMaskCustomizationGenericSlotScreen();

    UFUNCTION(BlueprintCallable)
    bool InitializePartsSlot(const USBZCosmeticsPartSlot* PartsSlot, FSBZCosmeticPanelDefaultParams DefaultButtonParams);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CosmeticPanelDefaultButtonSelected();
    
    UFUNCTION(BlueprintCallable)
    void CosmeticPanelButtonSelected(USBZMainMenuCosmeticItemButton* SelectedButton);
    
};

