#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsButton.h"
#include "SBZSettingsButtonTwoChoice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonTwoChoice : public USBZSettingsButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionOneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionTwoName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleValue;
    
public:
    USBZSettingsButtonTwoChoice();
    UFUNCTION(BlueprintCallable)
    void SetToggleValue(bool bIsToggled);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionTwoName(const FText& InOptionTwoName);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionOneName(const FText& InOptionOneName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OptionTwoNameChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OptionOneNameChanged();
    
};

