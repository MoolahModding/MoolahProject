#pragma once
#include "CoreMinimal.h"
#include "SBZOnActionChangedDelegate.h"
#include "SBZWidgetBase.h"
#include "SBZActionInputWidget.generated.h"

class USBZInputKeyWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZActionInputWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActionPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInputKeyWidget* KeyWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIconVisibleForKeyboardAndMouse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnActionChanged OnActionPressedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnActionChanged OnActionReleasedEvent;
    
public:
    USBZActionInputWidget();

    UFUNCTION(BlueprintCallable)
    void SetAction(FName InActionName, bool bShouldConsumeInput);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActionReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnActionPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionPressed();
    
};

