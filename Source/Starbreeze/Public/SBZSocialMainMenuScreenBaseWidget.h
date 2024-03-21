#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZSocialMainMenuScreenBaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSocialMainMenuScreenBaseWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSocialScreenVisible;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ToggleSocialScreenInputName;
    
public:
    USBZSocialMainMenuScreenBaseWidget();
    UFUNCTION(BlueprintCallable)
    void SetToggleSocialScreenInput(FName InNewToggleActionName);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleSocialScreenPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleSocialScreenInputChanged(FName NewToggleSocialSceenAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenSocialScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseSocialScreen();
    
};

