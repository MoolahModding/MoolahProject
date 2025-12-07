#pragma once
#include "CoreMinimal.h"
#include "OnControlsReferenceActionPressedDelegate.h"
#include "SBZActionControlReference.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZControlsReferenceActionWidget.generated.h"

class UPanelWidget;
class USBZActionInputWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZControlsReferenceActionWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ActionInputLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActionInputsDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZActionInputWidget> ActionInputWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnControlsReferenceActionPressed ControlsReferenceActionPressedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZActionControlReference InputRegisteredControlsReferenceAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimer;
    
public:
    USBZControlsReferenceActionWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void PressControlsReferenceAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTimerUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTimerCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnInputAction(const FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHoldActionReleased(const FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHoldActionPressed(const FName ActionName);
    
public:
    UFUNCTION(BlueprintCallable)
    bool DisplayControlsReferenceWithEvent(const FSBZActionControlReference& InControlsReferenceAction, FOnControlsReferenceActionPressed InControlsReferenceActionPressedEvent);
    
    UFUNCTION(BlueprintCallable)
    void ClearControlReference();
    
};

