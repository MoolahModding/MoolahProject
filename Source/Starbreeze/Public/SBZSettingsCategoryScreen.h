#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZSettingsCategoryScreen.generated.h"

class UPanelWidget;
class USBZMenuButton;
class USBZSettingHelperPanel;
class USBZSettingsButton;
class USBZSettingsButtonActionClick;
class USBZSettingsButtonAntiAliasingModeChoice;
class USBZSettingsButtonFrameInterpolatorChoice;
class USBZSettingsButtonGamepadBinding;
class USBZSettingsButtonKeyboardBinding;
class USBZSettingsButtonMultipleChoice;
class USBZSettingsButtonResolutionChoice;
class USBZSettingsButtonSlider;
class USBZSettingsButtonTwoChoice;
class USBZSettingsButtonUpscalerChoice;
class USBZSettingsButtonUpscalingModeChoice;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsCategoryScreen : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZSettingHelperPanel*> SettingHelperPanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ScrollBox_SettingsItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTextBlock> SettingsGroupTitleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSettingsButtonActionClick> SettingsButtonClassActionClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSettingsButtonTwoChoice> SettingsButtonClassTwoChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSettingsButtonMultipleChoice> SettingsButtonClassMultipleChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSettingsButtonResolutionChoice> SettingsButtonClassResolutionChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSettingsButtonAntiAliasingModeChoice> SettingsButtonClassAntiAliasingModeChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSettingsButtonUpscalerChoice> SettingsButtonClassUpscalerChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSettingsButtonUpscalingModeChoice> SettingsButtonClassUpscalingModeChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSettingsButtonSlider> SettingsButtonClassSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSettingsButtonKeyboardBinding> SettingsButtonClassKeyboardBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSettingsButtonGamepadBinding> SettingsButtonClassGamepadBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSettingsButtonFrameInterpolatorChoice> SettingsButtonClassFrameInterpolatorChoice;
    
public:
    USBZSettingsCategoryScreen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingsCategoryInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetSettingsCategory(const FName& SettingsCategoryName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingsButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingsButtonChanged(USBZSettingsButton* SettingsButton);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingsCategoryDirty(const FName& SettingsCategoryName) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeSettingsItems(const FName& SettingsCategoryName);
    
    UFUNCTION(BlueprintCallable)
    void ApplySettingsCategory(const FName& SettingsCategoryName);
    
};

