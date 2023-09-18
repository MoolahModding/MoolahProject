#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZMetaRequestResult.h"
#include "SBZActionControlReference.h"
#include "SBZBlackMarketUIVendorData.h"
#include "SBZButtonControlReference.h"
#include "SBZMenuStackScreenWidgetWithTutorial.h"
#include "SBZStoreItemUIData.h"
#include "SBZUIPopupData.h"
#include "SBZBlackMarketVendorsWidget.generated.h"

class UClass;
class UPanelWidget;
class USBZBlackMarketCategoryWidget;
class USBZBlackMarketConfirmationPopupBody;
class USBZBlackMarketStoreItemButton;
class USBZBlackMarketVendorButton;
class USBZControlsReferenceActionWidget;
class USBZInventoryBaseData;
class USBZLocalNavBar;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZBlackMarketVendorsWidget : public USBZMenuStackScreenWidgetWithTutorial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_CategoriesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLocalNavBar* Navbar_Vendors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CategoryButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* StoreItemButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* GoldStoreItemButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZActionControlReference PaydayStoreControlsReferenceAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_VendorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZControlsReferenceActionWidget* ControlsRefActionWidget_PaydayStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* VendorButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTransactionInProgress;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveVendorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZBlackMarketUIVendorData> VendorsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBlackMarketStoreItemButton* PurchaseTargetButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZStoreItemUIData PurchaseSlotUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBlackMarketStoreItemButton*> StoreItemButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBlackMarketStoreItemButton*> GoldStoreItemButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PurchaseItemPopUpBodyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PurchaseItemSlotPopUpBodyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchaseItemPopUpHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PurchaseItemPopUpAcceptAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PurchaseItemPopUpCancelAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZUIPopupData PopUpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBlackMarketConfirmationPopupBody* PurchaseItemPopUpBody;
    
public:
    USBZBlackMarketVendorsWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateActiveVendor(int32 NewActiveVendorIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void TryBuyItem(FSBZStoreItemUIData StoreItemUIData);
    
    UFUNCTION(BlueprintCallable)
    void SendPurchaseAttemptEvent(bool bIsAcceptPressed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVendorItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData);
    
    UFUNCTION(BlueprintCallable)
    void OnVendorItemButtonSelected(USBZMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVendorItemButtonFocused(USBZMenuButton* InButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVendorChanged(const FSBZBlackMarketUIVendorData& NewVendor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVendorButtonFocused(USBZMenuButton* InButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransactionProgressChanged(bool bInIsTransactionInProgress, bool bIsTransactionSuccessful);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPurchaseItemPopUpClosed(FName ClosingActionName);
    
    UFUNCTION(BlueprintCallable)
    void OnBuyRealMoneyItemCompleted(ESBZMetaRequestResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnBuyItemCompleted(ESBZMetaRequestResult Result, FGuid ItemId);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnVendorButtonSelected(USBZMenuButton* InButton);
    
public:
    UFUNCTION(BlueprintCallable)
    void GoToPreviousVendor();
    
    UFUNCTION(BlueprintCallable)
    void GoToNextVendor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBlackMarketCategoryWidget* GetFirstCategoryWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBlackMarketVendorButton* GetActiveVendorButton() const;
    
};

