#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZSettingsCategoryScreen.generated.h"

class UClass;
class UPanelWidget;
class USBZMenuButton;
class USBZSettingHelperPanel;
class USBZSettingsButton;

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
    UClass* SettingsGroupTitleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SettingsButtonClassTwoChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SettingsButtonClassMultipleChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SettingsButtonClassResolutionChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SettingsButtonClassDLSSSRModeChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SettingsButtonClassSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SettingsButtonClassKeyboardBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SettingsButtonClassGamepadBinding;
    
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

