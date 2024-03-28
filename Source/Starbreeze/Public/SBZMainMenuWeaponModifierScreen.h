#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "ESBZMetaRequestResult.h"
#include "SBZButtonControlReference.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuWeaponModifierScreen.generated.h"

class UPanelWidget;
class USBZLoadoutConfirmationPopupBody;
class USBZMainMenuWeaponPartProgressionButton;
class USBZMenuButton;
class USBZWeaponPartDataAsset;
class USBZWeaponPartSlot;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuWeaponModifierScreen : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_WeaponProgressionPartButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuWeaponPartProgressionButton> WeaponPartProgressionButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuWeaponPartProgressionButton* EquippedWeaponProgressionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_TransactionInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference OkControlReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLoadoutConfirmationPopupBody> PurchaseItemPopUpBodyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchaseItemPopUpHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PurchaseItemPopUpAcceptAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PurchaseItemPopUpCancelAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSlot* WeaponPartSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZEquippableLoadoutSlot EquippableSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuWeaponPartProgressionButton*> WeaponPartProgressionButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZWeaponPartDataAsset* WeaponPartInPurchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuWeaponPartProgressionButton* SelectedWeaponProgressionButton;
    
public:
    USBZMainMenuWeaponModifierScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void SetNewEquippedButton(USBZMainMenuWeaponPartProgressionButton* InEquippedWeaponProgressionButton);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDefaultFocus();
    
private:
    UFUNCTION()
    void SendPurchaseAttemptEvent(const bool bIsAcceptPressed);
    
    UFUNCTION()
    void OnWeaponPartProgressionButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void OnWeaponPartProgressionButtonFocusedChanged(USBZMenuButton* InButton, bool bIsFocused);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponPartButtonSelected(const USBZMainMenuWeaponPartProgressionButton* SelectedButton);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponPartButtonEquipped(const USBZMainMenuWeaponPartProgressionButton* EquippedButton);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnScreenInitialized();
    
private:
    UFUNCTION()
    void OnPurchaseItemPopUpClosed(FName ClosingActionName);
    
    UFUNCTION()
    void OnPayForAttachItemDone(const ESBZMetaRequestResult BuyWeaponResult, const FGuid ItemId);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void NewWeaponPartFocused(const USBZMainMenuWeaponPartProgressionButton* NewFocusedButton);
    
public:
    UFUNCTION(BlueprintCallable)
    bool InitializeWeaponPartCustomization(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex, const USBZWeaponPartSlot* InWeaponPartSlot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetWeaponSlotInfo(ESBZEquippableLoadoutSlot& OutEquippableSlot, int32& OutWeaponSlotIndex);
    
public:
    UFUNCTION(BlueprintPure)
    USBZWeaponPartSlot* GetCurrentWeaponPartSlot() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetBlockedSlotNamesForWeaponPart(const USBZWeaponPartDataAsset* WeaponPartDataAsset, TArray<FText>& OutSlotNames);
    
};

