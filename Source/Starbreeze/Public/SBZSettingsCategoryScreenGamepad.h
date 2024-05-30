#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZSettingsCategoryScreenGamepad.generated.h"

class USBZMenuButton;
class USBZSettingsButton;
class USBZSettingsButtonMultipleChoice;

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsCategoryScreenGamepad : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSettingsButtonMultipleChoice* MultipleChoiceButton_GamepadPreset;
    
public:
    USBZSettingsCategoryScreenGamepad();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingsCategoryInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetSettingsCategory();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingsButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingsButtonChanged(USBZSettingsButton* SettingsButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputTypeChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingsCategoryDirty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeSettingsItems();
    
    UFUNCTION(BlueprintCallable)
    void ApplySettingsCategory();
    
};

