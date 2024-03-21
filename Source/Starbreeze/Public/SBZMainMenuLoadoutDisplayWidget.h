#pragma once
#include "CoreMinimal.h"
#include "OnItemButtonSelectedDelegate.h"
#include "OnWeaponButtonSelectedDelegate.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuLoadoutDisplayWidget.generated.h"

class USBZMainMenuInventoryItemSlotButton;
class USBZMainMenuLoadoutWeaponSlotButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuLoadoutDisplayWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuLoadoutWeaponSlotButton* Button_PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuLoadoutWeaponSlotButton* Button_SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuInventoryItemSlotButton* Button_OverkillWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuInventoryItemSlotButton* Button_Armour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuInventoryItemSlotButton* Button_Throwable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuInventoryItemSlotButton* Button_Tool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuInventoryItemSlotButton* Button_Placeable;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponButtonSelected WeaponButtonSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemButtonSelected OverkillWeaponButtonSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemButtonSelected ArmourButtonSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemButtonSelected ThrowableButtonSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemButtonSelected ToolButtonSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemButtonSelected PlaceableButtonSelected;
    
    USBZMainMenuLoadoutDisplayWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateLoadoutConfigFromIndex(int32 InLoadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLoadoutConfig(const FSBZPlayerLoadoutConfig& PlayerLoadoutConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewConfigUpdated(const FSBZPlayerLoadoutConfig& PlayerLoadoutConfig);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLocalLoadoutChanged(const FSBZPlayerLoadoutConfig& InPlayerLoadout, int32 ModifiedPlayerLoadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnWeaponButtonSelected(USBZMenuButton* InButtonSelected);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnOverkillWeaponButtonSelected(USBZMenuButton* InButtonSelected);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnItemToolButtonSelected(USBZMenuButton* InButtonSelected);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnItemThrowableButtonSelected(USBZMenuButton* InButtonSelected);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnItemPlaceableButtonSelected(USBZMenuButton* InButtonSelected);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnItemArmourButtonSelected(USBZMenuButton* InButtonSelected);
    
};

