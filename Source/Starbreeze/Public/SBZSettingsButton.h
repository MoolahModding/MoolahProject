#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZSettingsButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingHelperPanelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SettingNameLocalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanResetSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSettingIsDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSettingHasDefaultValue;
    
public:
    USBZSettingsButton();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SettingIsDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SettingHasDefaultValue() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSettingNameLocalized(const FText& InSettingNameLocalized);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingName(const FName& InSettingName);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingHelperPanelName(const FName& InSettingHelperPanelName);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingCategoryName(const FName& InSettingCategoryName);
    
    UFUNCTION(BlueprintCallable)
    void SetCanResetSetting(bool InCanResetSetting);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectionNameChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanResetSetting() const;
    
};

