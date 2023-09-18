#pragma once
#include "CoreMinimal.h"
#include "OnCosmeticButtonSelectedDelegate.h"
#include "OnCosmeticButtonStateChangedDelegate.h"
#include "OnDefaultButtonPressedDelegate.h"
#include "SBZCosmeticPanelInitParams.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuCosmeticPanel.generated.h"

class UPanelWidget;
class USBZCosmeticsDataAsset;
class USBZMainMenuCosmeticItemButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCosmeticPanel : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ButtonsContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCosmeticButtonSelected OnCosmeticButtonSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCosmeticButtonStateChanged OnCosmeticButtonFocusedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCosmeticButtonStateChanged OnCosmeticButtonHoveredChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDefaultButtonPressed OnCosmeticButtonDefaultSelected;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZCosmeticsDataAsset*, USBZMainMenuCosmeticItemButton*> CosmeticButtonMap;
    
public:
    USBZMainMenuCosmeticPanel();

    UFUNCTION(BlueprintCallable)
    void UpdateStackCount(const USBZCosmeticsDataAsset* InCosmeticItem, int32 InNewStackCount);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseButtons();
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnCosmeticItemButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnCosmeticItemButtonHoverChanged(USBZMenuButton* InButton, bool bIsHovered);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnCosmeticItemButtonFocusedChanged(USBZMenuButton* InButton, bool bIsFocused);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeCosmeticItemPanel(const FSBZCosmeticPanelInitParams& InitParams);
    
    UFUNCTION(BlueprintCallable)
    void GiveKeyboardFocus();
    
};

