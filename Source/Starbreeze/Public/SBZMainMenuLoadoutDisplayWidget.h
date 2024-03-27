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
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewConfigUpdated(const FSBZPlayerLoadoutConfig& PlayerLoadoutConfig);
    
private:
    UFUNCTION()
    void OnLocalLoadoutChanged(const FSBZPlayerLoadoutConfig& InPlayerLoadout, int32 ModifiedPlayerLoadoutIndex);
    
    UFUNCTION()
    void NativeOnWeaponButtonSelected(USBZMenuButton* InButtonSelected);
    
    UFUNCTION()
    void NativeOnOverkillWeaponButtonSelected(USBZMenuButton* InButtonSelected);
    
    UFUNCTION()
    void NativeOnItemToolButtonSelected(USBZMenuButton* InButtonSelected);
    
    UFUNCTION()
    void NativeOnItemThrowableButtonSelected(USBZMenuButton* InButtonSelected);
    
    UFUNCTION()
    void NativeOnItemPlaceableButtonSelected(USBZMenuButton* InButtonSelected);
    
    UFUNCTION()
    void NativeOnItemArmourButtonSelected(USBZMenuButton* InButtonSelected);
    
};

