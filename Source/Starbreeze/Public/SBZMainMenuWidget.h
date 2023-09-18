#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ESBZBlackMarketVendorType.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "ESBZItemLoadoutSlot.h"
#include "ESBZMainMenuCosmeticType.h"
#include "SBZBaseMenuWidget.h"
#include "SBZButtonControlReference.h"
#include "SBZUIPopupData.h"
#include "SBZMainMenuWidget.generated.h"

class UClass;
class UPD3HeistDataAsset;
class USBZBlackMarketInspectWidget;
class USBZCosmeticsPartSlot;
class USBZFullscreenVideoWidget;
class USBZGameStartMainMenuSkillsSelection;
class USBZGameStartMainMenuWeaponCustomizationWidget;
class USBZInventoryBaseData;
class USBZMainMenuCosmetic;
class USBZMainMenuCosmeticItemButton;
class USBZMainMenuCrimeNetHeistInspectScreen;
class USBZMainMenuItemInventoryScreen;
class USBZMainMenuLoadoutCustomization;
class USBZMainMenuLoadoutWeaponModCategoryWidget;
class USBZMainMenuMaskCustomization;
class USBZMainMenuSuitCosmeticCustomizationScreen;
class USBZMainMenuSuitCustomization;
class USBZMainMenuWeaponInventoryScreen;
class USBZMainMenuWeaponModifierScreen;
class USBZMainMenuWeaponProgressionScreen;
class USBZMenuNavBar;
class USBZSuitPartConfig;
class USBZWeaponPartSlot;
class USBZWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuWidget : public USBZBaseMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuLoadoutCustomization* Widget_LoadoutCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZGameStartMainMenuWeaponCustomizationWidget* Widget_WeaponCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuLoadoutWeaponModCategoryWidget* Widget_WeaponCustomizationTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuWeaponInventoryScreen* Widget_WeaponInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuItemInventoryScreen* Widget_ItemInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZGameStartMainMenuSkillsSelection* Widget_SkillsSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuWeaponProgressionScreen* Widget_WeaponProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuMaskCustomization* Widget_MaskCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuWeaponModifierScreen* Widget_WeaponModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuSuitCustomization* Widget_SuitCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuSuitCosmeticCustomizationScreen* Widget_SuitCosmeticCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBlackMarketInspectWidget* Widget_BlackMarketInspect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuCosmetic* Widget_Cosmetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuCrimeNetHeistInspectScreen* Widget_HeistInspect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZFullscreenVideoWidget* Widget_FullscreenVideo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuNavBar* Widget_MainMenuNavbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CosmeticItemButtonClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CrossplayPopupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TutorialPopupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialPopupHeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CrossplayPopupHeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CrossplayPopupBodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PopUpPlayTutorialAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PopUpSkipTutorialAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PopUpOptInAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PopUpOptOutAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZUIPopupData PopUpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZWidgetBase* PopUpBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TutorialObjectPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuCosmeticItemButton*> CosmeticButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZBlackMarketVendorType VendorTypeToOpen;
    
public:
    USBZMainMenuWidget();

private:
    UFUNCTION(BlueprintCallable)
    void ShowTutorialPopup();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMainMenuFunction();
    
private:
    UFUNCTION(BlueprintCallable)
    void ShowCrossplayPopup();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVendorTypeToOpen(ESBZBlackMarketVendorType VendorType);
    
    UFUNCTION(BlueprintCallable)
    void RequestRemoveBackgroundBlur();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveBackgroundBlur();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTutorialPopUpClosed(FName ClosingActionName);
    
    UFUNCTION(BlueprintCallable)
    void OnCrossplayPopUpClosed(FName ClosingActionName);
    
public:
    UFUNCTION(BlueprintCallable)
    ESBZBlackMarketVendorType GetVendorTypeToOpen(bool bResetValue);
    
    UFUNCTION(BlueprintCallable)
    bool DisplayWeaponProgressionScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool DisplayWeaponModiferScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex, const USBZWeaponPartSlot* InWeaponPartSlot);
    
    UFUNCTION(BlueprintCallable)
    bool DisplayWeaponInventoryScreen(int32 LoadoutIndex, ESBZEquippableLoadoutSlot InEquippableSlot);
    
    UFUNCTION(BlueprintCallable)
    bool DisplaySuitCustomizationScreen(int32 InSuitSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool DisplaySuitCosmeticCustomizationScreen(int32 InSuitSlotIndex, const USBZSuitPartConfig* InSuitPartConfig, const USBZCosmeticsPartSlot* InCosmeticPartSlot);
    
    UFUNCTION(BlueprintCallable)
    bool DisplaySkillsSelection(int32 InLoadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    bool DisplayMaskGenericSlotScreen(const USBZCosmeticsPartSlot* InCosmeticPartSlot, bool HasDefaultBool, FText DefaultDisplayName);
    
    UFUNCTION(BlueprintCallable)
    bool DisplayMaskCustomizationScreen(int32 InMaskSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool DisplayItemInventoryScreen(int32 InLoadoutIndex, ESBZItemLoadoutSlot InItemSlotType);
    
    UFUNCTION(BlueprintCallable)
    void DisplayHeistInpectScreen(UPD3HeistDataAsset* InHeistData);
    
    UFUNCTION(BlueprintCallable)
    void DisplayFullscreenVideoScreen(const FFilePath& FilePath);
    
    UFUNCTION(BlueprintCallable)
    void DisplayCosmeticScreen(ESBZMainMenuCosmeticType InType, ESBZEquippableLoadoutSlot InEquippableSlot, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool DisplayBlackmarketInspectScreen(USBZInventoryBaseData* InspectData);
    
    UFUNCTION(BlueprintCallable)
    bool CustomizeWeaponInSlotTemp(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CustomizeWeaponInSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void CustomizeLoadout(int32 InLoadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CanInspectInventoryItem(USBZInventoryBaseData* InspectData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddBackgroundBlur();
    
};

