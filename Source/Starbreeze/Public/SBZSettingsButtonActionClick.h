#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsButton.h"
#include "SBZSettingsButtonActionClick.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonActionClick : public USBZSettingsButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionButtonLabelLocalized;
    
public:
    USBZSettingsButtonActionClick();

    UFUNCTION(BlueprintCallable)
    void SetActionButtonLabelLocalized(const FText& NewActionButtonLabelLocalized);
    
    UFUNCTION(BlueprintCallable)
    void ClickActionButton();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionButtonLabelLocalizedChanged();
    
};

