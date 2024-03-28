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
    UFUNCTION(BlueprintImplementableEvent)
    void SettingsCategoryInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetSettingsCategory();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshScreen();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSettingsButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSettingsButtonChanged(USBZSettingsButton* SettingsButton);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputTypeChanged();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSettingsCategoryDirty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeSettingsItems();
    
    UFUNCTION(BlueprintCallable)
    void ApplySettingsCategory();
    
};

